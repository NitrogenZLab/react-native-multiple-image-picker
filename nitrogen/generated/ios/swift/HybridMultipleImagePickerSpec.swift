///
/// HybridMultipleImagePickerSpec.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/// See ``HybridMultipleImagePickerSpec``
public protocol HybridMultipleImagePickerSpec_protocol: AnyObject {
  // Properties
  

  // Methods
  func openPicker(config: NitroConfig, resolved: @escaping ((_ result: [PickerResult]) -> Void), rejected: @escaping ((_ reject: Double) -> Void)) throws -> Void
  func openCrop(image: String, config: NitroCropConfig, resolved: @escaping ((_ result: CropResult) -> Void), rejected: @escaping ((_ reject: Double) -> Void)) throws -> Void
  func openPreview(media: [MediaPreview], index: Double, config: NitroPreviewConfig, onLongPress: @escaping ((_ index: Double) -> Void)) throws -> Void
  func openCamera(config: NitroCameraConfig, resolved: @escaping ((_ result: CameraResult) -> Void), rejected: @escaping ((_ reject: Double) -> Void)) throws -> Void
}

/// See ``HybridMultipleImagePickerSpec``
public class HybridMultipleImagePickerSpec_base: HybridObjectSpec {
  private weak var cxxWrapper: HybridMultipleImagePickerSpec_cxx? = nil
  public func getCxxWrapper() -> HybridMultipleImagePickerSpec_cxx {
  #if DEBUG
    guard self is HybridMultipleImagePickerSpec else {
      fatalError("`self` is not a `HybridMultipleImagePickerSpec`! Did you accidentally inherit from `HybridMultipleImagePickerSpec_base` instead of `HybridMultipleImagePickerSpec`?")
    }
  #endif
    if let cxxWrapper = self.cxxWrapper {
      return cxxWrapper
    } else {
      let cxxWrapper = HybridMultipleImagePickerSpec_cxx(self as! HybridMultipleImagePickerSpec)
      self.cxxWrapper = cxxWrapper
      return cxxWrapper
    }
  }
  public var memorySize: Int { return 0 }
}

/**
 * A Swift base-protocol representing the MultipleImagePicker HybridObject.
 * Implement this protocol to create Swift-based instances of MultipleImagePicker.
 * ```swift
 * class HybridMultipleImagePicker : HybridMultipleImagePickerSpec {
 *   // ...
 * }
 * ```
 */
public typealias HybridMultipleImagePickerSpec = HybridMultipleImagePickerSpec_protocol & HybridMultipleImagePickerSpec_base
