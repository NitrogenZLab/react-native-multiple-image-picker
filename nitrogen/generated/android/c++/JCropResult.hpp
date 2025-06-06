///
/// JCropResult.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "CropResult.hpp"

#include <string>

namespace margelo::nitro::multipleimagepicker {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ struct "CropResult" and the the Kotlin data class "CropResult".
   */
  struct JCropResult final: public jni::JavaClass<JCropResult> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/multipleimagepicker/CropResult;";

  public:
    /**
     * Convert this Java/Kotlin-based struct to the C++ struct CropResult by copying all values to C++.
     */
    [[maybe_unused]]
    [[nodiscard]]
    CropResult toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldPath = clazz->getField<jni::JString>("path");
      jni::local_ref<jni::JString> path = this->getFieldValue(fieldPath);
      static const auto fieldWidth = clazz->getField<double>("width");
      double width = this->getFieldValue(fieldWidth);
      static const auto fieldHeight = clazz->getField<double>("height");
      double height = this->getFieldValue(fieldHeight);
      return CropResult(
        path->toStdString(),
        width,
        height
      );
    }

  public:
    /**
     * Create a Java/Kotlin-based struct by copying all values from the given C++ struct to Java.
     */
    [[maybe_unused]]
    static jni::local_ref<JCropResult::javaobject> fromCpp(const CropResult& value) {
      return newInstance(
        jni::make_jstring(value.path),
        value.width,
        value.height
      );
    }
  };

} // namespace margelo::nitro::multipleimagepicker
