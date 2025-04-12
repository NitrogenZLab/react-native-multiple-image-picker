///
/// NitroCameraConfig.kt
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

package com.margelo.nitro.multipleimagepicker

import androidx.annotation.Keep
import com.facebook.proguard.annotations.DoNotStrip
import com.margelo.nitro.core.*

/**
 * Represents the JavaScript object/struct "NitroCameraConfig".
 */
@DoNotStrip
@Keep
data class NitroCameraConfig
  @DoNotStrip
  @Keep
  constructor(
    val mediaType: MediaType,
    val presentation: Presentation,
    val language: Language,
    val crop: PickerCropConfig?,
    val isSaveSystemAlbum: Boolean?,
    val color: Double?,
    val cameraDevice: CameraDevice?,
    val videoMaximumDuration: Double?
  ) {
  /* main constructor */
}
