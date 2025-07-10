# Image Orientation Handling

## Overview

The React Native Multiple Image Picker provides automatic image orientation handling on Android devices. This feature ensures that images are displayed correctly regardless of how they were captured or stored.

## How It Works

### EXIF Data Processing

The library automatically reads EXIF orientation data from images and applies the necessary transformations:

1. **Rotation**: Images are rotated to match their intended orientation
2. **Flipping**: Images are flipped horizontally or vertically when needed
3. **Complex Transformations**: Transpose and transverse operations are applied for complex orientation cases

### Supported EXIF Orientations

The library handles all standard EXIF orientation values:

| EXIF Value | Description | Transformation |
|------------|-------------|----------------|
| 1 | Normal | No transformation |
| 2 | Flip horizontal | Horizontal flip |
| 3 | Rotate 180° | 180° rotation |
| 4 | Flip vertical | Vertical flip |
| 5 | Transpose | Flip horizontal + 90° rotation |
| 6 | Rotate 90° CW | 90° clockwise rotation |
| 7 | Transverse | Flip horizontal + 270° rotation |
| 8 | Rotate 270° CW | 270° clockwise rotation |

## Usage

### Accessing Orientation Data

The `PickerResult` interface includes an `orientation` field that contains the original EXIF orientation value:

```typescript
interface PickerResult {
  // ... other fields
  orientation?: number; // EXIF orientation value (1-8)
}
```

### Example Usage

```typescript
import { openPicker } from '@baronha/react-native-multiple-image-picker';

const handleImagePicker = async () => {
  try {
    const results = await openPicker({
      mediaType: 'image',
      maxSelect: 10,
    });
    
    results.forEach((result) => {
      console.log('Image orientation:', result.orientation);
      console.log('Adjusted dimensions:', result.width, 'x', result.height);
    });
  } catch (error) {
    console.error('Picker error:', error);
  }
};
```

## Error Handling

The orientation handling includes comprehensive error handling:

- **File validation**: Checks if the file exists before processing
- **EXIF reading errors**: Gracefully handles corrupted or missing EXIF data
- **Memory management**: Catches OutOfMemoryError during image processing
- **Fallback behavior**: Returns original image data if orientation processing fails

## Performance Considerations

- **Automatic processing**: Orientation adjustment happens automatically during image selection
- **Memory efficient**: Images are processed one at a time to prevent memory issues
- **Fallback mechanism**: If bitmap processing fails, the original image is returned with orientation metadata

## Platform Support

| Platform | Support Status |
|----------|---------------|
| Android | ✅ Full support |
| iOS | ⚠️ Handled by system |

**Note**: iOS automatically handles image orientation at the system level, so explicit orientation processing is primarily needed for Android compatibility.

## Troubleshooting

### Common Issues

1. **Orientation not applied**: Check if the image has valid EXIF data
2. **Memory errors**: Large images may cause memory issues on low-end devices
3. **Performance**: Processing many large images may take time

### Debug Logs

Enable debug logging to see orientation processing details:

```kotlin
// In Android logs, look for tags like:
// "EXIF orientation for [path]: [value]"
// "Rotating image [degrees] degrees"
// "Adjusted dimensions: [width]x[height]"
```

## Best Practices

1. **Test with various devices**: Different cameras may produce different orientation values
2. **Handle edge cases**: Always check for null/undefined orientation values
3. **Monitor performance**: Watch for memory usage when processing large images
4. **Validate results**: Ensure width/height values are reasonable after orientation adjustment

## Implementation Details

The orientation handling is implemented in the `MultipleImagePickerImp.kt` file with the following key functions:

- `adjustOrientation()`: Main function that processes image orientation
- `rotateImage()`: Rotates images by specified degrees
- `flipImage()`: Flips images horizontally or vertically
- `transposeImage()`: Applies transpose transformation
- `transverseImage()`: Applies transverse transformation

For more technical details, refer to the source code in the Android implementation.
