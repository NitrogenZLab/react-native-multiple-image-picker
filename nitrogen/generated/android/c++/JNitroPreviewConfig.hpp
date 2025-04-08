///
/// JNitroPreviewConfig.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "NitroPreviewConfig.hpp"

#include "JLanguage.hpp"
#include "Language.hpp"
#include <optional>

namespace margelo::nitro::multipleimagepicker {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ struct "NitroPreviewConfig" and the the Kotlin data class "NitroPreviewConfig".
   */
  struct JNitroPreviewConfig final: public jni::JavaClass<JNitroPreviewConfig> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/multipleimagepicker/NitroPreviewConfig;";

  public:
    /**
     * Convert this Java/Kotlin-based struct to the C++ struct NitroPreviewConfig by copying all values to C++.
     */
    [[maybe_unused]]
    NitroPreviewConfig toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldLanguage = clazz->getField<JLanguage>("language");
      jni::local_ref<JLanguage> language = this->getFieldValue(fieldLanguage);
      static const auto fieldVideoAutoPlay = clazz->getField<jni::JBoolean>("videoAutoPlay");
      jni::local_ref<jni::JBoolean> videoAutoPlay = this->getFieldValue(fieldVideoAutoPlay);
      return NitroPreviewConfig(
        language->toCpp(),
        videoAutoPlay != nullptr ? std::make_optional(static_cast<bool>(videoAutoPlay->value())) : std::nullopt
      );
    }

  public:
    /**
     * Create a Java/Kotlin-based struct by copying all values from the given C++ struct to Java.
     */
    [[maybe_unused]]
    static jni::local_ref<JNitroPreviewConfig::javaobject> fromCpp(const NitroPreviewConfig& value) {
      return newInstance(
        JLanguage::fromCpp(value.language),
        value.videoAutoPlay.has_value() ? jni::JBoolean::valueOf(value.videoAutoPlay.value()) : nullptr
      );
    }
  };

} // namespace margelo::nitro::multipleimagepicker
