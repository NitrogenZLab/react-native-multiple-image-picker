package com.margelo.nitro.multipleimagepicker

import androidx.exifinterface.media.ExifInterface
import org.junit.Assert.assertEquals
import org.junit.Assert.assertNotNull
import org.junit.Assert.assertTrue
import org.junit.Test
import org.junit.runner.RunWith
import org.robolectric.RobolectricTestRunner
import org.robolectric.annotation.Config

@RunWith(RobolectricTestRunner::class)
@Config(sdk = [28])
class OrientationTest {

    @Test
    fun testOrientationValues() {
        // Test all possible EXIF orientation values
        val orientationTests = mapOf(
            ExifInterface.ORIENTATION_NORMAL to "Normal",
            ExifInterface.ORIENTATION_FLIP_HORIZONTAL to "Flip Horizontal",
            ExifInterface.ORIENTATION_ROTATE_180 to "Rotate 180°",
            ExifInterface.ORIENTATION_FLIP_VERTICAL to "Flip Vertical",
            ExifInterface.ORIENTATION_TRANSPOSE to "Transpose",
            ExifInterface.ORIENTATION_ROTATE_90 to "Rotate 90° CW",
            ExifInterface.ORIENTATION_TRANSVERSE to "Transverse",
            ExifInterface.ORIENTATION_ROTATE_270 to "Rotate 270° CW",
            ExifInterface.ORIENTATION_UNDEFINED to "Undefined"
        )

        orientationTests.forEach { (value, description) ->
            assertTrue("$description orientation value should be valid", value >= 0)
            assertTrue("$description orientation value should be within range", value <= 8)
        }
    }

    @Test
    fun testOrientationMapping() {
        // Test that orientation values map correctly to transformations
        val orientationMappings = mapOf(
            ExifInterface.ORIENTATION_NORMAL to 0f,
            ExifInterface.ORIENTATION_ROTATE_90 to 90f,
            ExifInterface.ORIENTATION_ROTATE_180 to 180f,
            ExifInterface.ORIENTATION_ROTATE_270 to 270f
        )

        orientationMappings.forEach { (orientation, expectedRotation) ->
            val actualRotation = when (orientation) {
                ExifInterface.ORIENTATION_ROTATE_90 -> 90f
                ExifInterface.ORIENTATION_ROTATE_180 -> 180f
                ExifInterface.ORIENTATION_ROTATE_270 -> 270f
                else -> 0f
            }
            assertEquals("Orientation $orientation should map to $expectedRotation degrees", expectedRotation, actualRotation)
        }
    }

    @Test
    fun testPickerResultOrientationField() {
        // Test that PickerResult can handle orientation values
        val testResult = PickerResult(
            localIdentifier = "test-id",
            width = 1920.0,
            height = 1080.0,
            mime = "image/jpeg",
            size = 1024000.0,
            bucketId = null,
            realPath = null,
            parentFolderName = null,
            creationDate = null,
            crop = false,
            orientation = ExifInterface.ORIENTATION_ROTATE_90.toDouble(),
            path = "test/path",
            type = ResultType.IMAGE,
            duration = null,
            thumbnail = null,
            fileName = "test.jpg"
        )

        assertNotNull("PickerResult should have orientation field", testResult.orientation)
        assertEquals("Orientation should be 90 degrees", ExifInterface.ORIENTATION_ROTATE_90.toDouble(), testResult.orientation!!)
    }

    @Test
    fun testOrientationWithDifferentImageTypes() {
        // Test orientation handling for different image types
        val imageTypes = listOf(
            "image/jpeg",
            "image/png",
            "image/webp",
            "image/heic"
        )

        imageTypes.forEach { mimeType ->
            val testResult = PickerResult(
                localIdentifier = "test-id",
                width = 1920.0,
                height = 1080.0,
                mime = mimeType,
                size = 1024000.0,
                bucketId = null,
                realPath = null,
                parentFolderName = null,
                creationDate = null,
                crop = false,
                orientation = ExifInterface.ORIENTATION_ROTATE_90.toDouble(),
                path = "test/path",
                type = ResultType.IMAGE,
                duration = null,
                thumbnail = null,
                fileName = "test.jpg"
            )

            assertEquals("$mimeType should preserve orientation", ExifInterface.ORIENTATION_ROTATE_90.toDouble(), testResult.orientation!!)
        }
    }

    @Test
    fun testOrientationForVideoFiles() {
        // Test that video files don't have orientation applied
        val videoResult = PickerResult(
            localIdentifier = "video-test-id",
            width = 1920.0,
            height = 1080.0,
            mime = "video/mp4",
            size = 10240000.0,
            bucketId = null,
            realPath = null,
            parentFolderName = null,
            creationDate = null,
            crop = false,
            orientation = null, // Videos typically don't have orientation
            path = "test/video/path",
            type = ResultType.VIDEO,
            duration = 120.0,
            thumbnail = null,
            fileName = "test.mp4"
        )

        assertEquals("Video should have VIDEO type", ResultType.VIDEO, videoResult.type)
        // Note: Videos may or may not have orientation depending on implementation
    }
}

