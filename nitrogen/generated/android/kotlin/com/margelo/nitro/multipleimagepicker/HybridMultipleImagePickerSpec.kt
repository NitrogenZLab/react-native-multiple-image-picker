///
/// HybridMultipleImagePickerSpec.kt
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

package com.margelo.nitro.multipleimagepicker

import android.util.Log
import androidx.annotation.Keep
import com.facebook.jni.HybridData
import com.facebook.proguard.annotations.DoNotStrip
import com.margelo.nitro.core.*

/**
 * A Kotlin class representing the MultipleImagePicker HybridObject.
 * Implement this abstract class to create Kotlin-based instances of MultipleImagePicker.
 */
@DoNotStrip
@Keep
@Suppress("RedundantSuppression", "KotlinJniMissingFunction", "PropertyName", "RedundantUnitReturnType", "unused")
abstract class HybridMultipleImagePickerSpec: HybridObject() {
  @DoNotStrip
  private var mHybridData: HybridData = initHybrid()

  init {
    // Pass this `HybridData` through to it's base class,
    // to represent inheritance to JHybridObject on C++ side
    super.updateNative(mHybridData)
  }

  /**
   * Call from a child class to initialize HybridData with a child.
   */
  override fun updateNative(hybridData: HybridData) {
    mHybridData = hybridData
  }

  // Properties
  

  // Methods
  @DoNotStrip
  @Keep
  abstract fun openPicker(config: NitroConfig, resolved: (result: Array<PickerResult>) -> Unit, rejected: (reject: Double) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun openPicker(config: NitroConfig, resolved: Func_void_std__vector_PickerResult_, rejected: Func_void_double): Unit {
    val __result = openPicker(config, resolved.toLambda(), rejected.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun openCrop(image: String, config: NitroCropConfig, resolved: (result: CropResult) -> Unit, rejected: (reject: Double) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun openCrop(image: String, config: NitroCropConfig, resolved: Func_void_CropResult, rejected: Func_void_double): Unit {
    val __result = openCrop(image, config, resolved.toLambda(), rejected.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun openPreview(media: Array<MediaPreview>, index: Double, config: NitroPreviewConfig, onLongPress: (index: Double) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun openPreview(media: Array<MediaPreview>, index: Double, config: NitroPreviewConfig, onLongPress: Func_void_double): Unit {
    val __result = openPreview(media, index, config, onLongPress.toLambda())
    return __result
  }
  
  @DoNotStrip
  @Keep
  abstract fun openCamera(config: NitroCameraConfig, resolved: (result: CameraResult) -> Unit, rejected: (reject: Double) -> Unit): Unit
  
  @DoNotStrip
  @Keep
  private fun openCamera(config: NitroCameraConfig, resolved: Func_void_CameraResult, rejected: Func_void_double): Unit {
    val __result = openCamera(config, resolved.toLambda(), rejected.toLambda())
    return __result
  }

  private external fun initHybrid(): HybridData

  companion object {
    private const val TAG = "HybridMultipleImagePickerSpec"
    init {
      try {
        Log.i(TAG, "Loading MultipleImagePicker C++ library...")
        System.loadLibrary("MultipleImagePicker")
        Log.i(TAG, "Successfully loaded MultipleImagePicker C++ library!")
      } catch (e: Error) {
        Log.e(TAG, "Failed to load MultipleImagePicker C++ library! Is it properly installed and linked? " +
                    "Is the name correct? (see `CMakeLists.txt`, at `add_library(...)`)", e)
        throw e
      }
    }
  }
}
