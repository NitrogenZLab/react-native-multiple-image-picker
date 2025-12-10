//
//  HybridMultipleImagePicker+Result.swift
//  Pods
//
//  Created by BAO HA on 24/10/24.
//

import HXPhotoPicker
import Photos
import ImageIO

extension HybridMultipleImagePicker {
    func getResult(_ asset: PhotoAsset) async throws -> PickerResult {
        let urlResult = try await asset.urlResult()
        let url = urlResult.url

        let creationDate = Int(asset.phAsset?.creationDate?.timeIntervalSince1970 ?? 0)

        let mime = url.getMimeType()

        let phAsset = asset.phAsset

        let type: ResultType = .init(fromString: asset.mediaType == .video ? "video" : "image")!
        let thumbnail = asset.phAsset?.getVideoAssetThumbnail(from: url.absoluteString, in: 1)
        
        // Extract orientation for images
        let orientation: Double? = (type == .image) ? extractImageOrientation(from: url) : nil
        
        // Adjust dimensions based on orientation for portrait/landscape rotations
        let (adjustedWidth, adjustedHeight) = adjustDimensionsForOrientation(
            width: asset.imageSize.width,
            height: asset.imageSize.height,
            orientation: orientation
        )

        return PickerResult(localIdentifier: phAsset!.localIdentifier,
                            width: adjustedWidth,
                            height: adjustedHeight,
                            mime: mime,
                            size: Double(asset.fileSize),
                            bucketId: nil,
                            realPath: url.path,
                            parentFolderName: nil,
                            creationDate: creationDate > 0 ? Double(creationDate) : nil,
                            crop: false,
                            orientation: orientation,
                            path: "file://\(url.absoluteString)",
                            type: type,
                            duration: asset.videoDuration,
                            thumbnail: thumbnail,
                            fileName: phAsset?.fileName)
    }
    
    /// Extract EXIF orientation from image file
    private func extractImageOrientation(from url: URL) -> Double? {
        guard let imageSource = CGImageSourceCreateWithURL(url as CFURL, nil),
              let imageProperties = CGImageSourceCopyPropertiesAtIndex(imageSource, 0, nil) as? [String: Any],
              let orientation = imageProperties[kCGImagePropertyOrientation as String] as? Int32 else {
            return 0.0 // Default to no rotation
        }
        
        return cgImageOrientationToRotationDegrees(orientation)
    }
    
    /// Convert CGImagePropertyOrientation to rotation degrees
    private func cgImageOrientationToRotationDegrees(_ orientation: Int32) -> Double {
        switch orientation {
        case 1: return 0.0   // Normal
        case 2: return 0.0   // Flip horizontal
        case 3: return 180.0 // Rotate 180°
        case 4: return 0.0   // Flip vertical
        case 5: return 90.0  // Transpose (flip + rotate 90°)
        case 6: return 90.0  // Rotate 90° CW
        case 7: return -90.0 // Transverse (flip + rotate -90°)
        case 8: return -90.0 // Rotate 270° CW (or -90° CCW)
        default: return 0.0
        }
    }
    
    /// Adjust image dimensions based on orientation
    private func adjustDimensionsForOrientation(width: Double, height: Double, orientation: Double?) -> (Double, Double) {
        guard let orientation = orientation else {
            return (width, height)
        }
        
        // Swap dimensions for 90° and 270° rotations
        if orientation == 90.0 || orientation == -90.0 {
            return (height, width)
        }
        
        return (width, height)
    }
}
