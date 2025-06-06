///
/// MediaPreview.kt
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

package com.margelo.nitro.multipleimagepicker

import androidx.annotation.Keep
import com.facebook.proguard.annotations.DoNotStrip
import com.margelo.nitro.core.*

/**
 * Represents the JavaScript object/struct "MediaPreview".
 */
@DoNotStrip
@Keep
data class MediaPreview
  @DoNotStrip
  @Keep
  constructor(
    val type: ResultType,
    val path: String?,
    val thumbnail: String?,
    val localIdentifier: String?
  ) {
  /* main constructor */
}
