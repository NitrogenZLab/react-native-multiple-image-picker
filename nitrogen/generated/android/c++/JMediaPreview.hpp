///
/// JMediaPreview.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "MediaPreview.hpp"

#include "JResultType.hpp"
#include "ResultType.hpp"
#include <optional>
#include <string>

namespace margelo::nitro::multipleimagepicker {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ struct "MediaPreview" and the the Kotlin data class "MediaPreview".
   */
  struct JMediaPreview final: public jni::JavaClass<JMediaPreview> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/multipleimagepicker/MediaPreview;";

  public:
    /**
     * Convert this Java/Kotlin-based struct to the C++ struct MediaPreview by copying all values to C++.
     */
    [[maybe_unused]]
    [[nodiscard]]
    MediaPreview toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldType = clazz->getField<JResultType>("type");
      jni::local_ref<JResultType> type = this->getFieldValue(fieldType);
      static const auto fieldPath = clazz->getField<jni::JString>("path");
      jni::local_ref<jni::JString> path = this->getFieldValue(fieldPath);
      static const auto fieldThumbnail = clazz->getField<jni::JString>("thumbnail");
      jni::local_ref<jni::JString> thumbnail = this->getFieldValue(fieldThumbnail);
      static const auto fieldLocalIdentifier = clazz->getField<jni::JString>("localIdentifier");
      jni::local_ref<jni::JString> localIdentifier = this->getFieldValue(fieldLocalIdentifier);
      return MediaPreview(
        type->toCpp(),
        path != nullptr ? std::make_optional(path->toStdString()) : std::nullopt,
        thumbnail != nullptr ? std::make_optional(thumbnail->toStdString()) : std::nullopt,
        localIdentifier != nullptr ? std::make_optional(localIdentifier->toStdString()) : std::nullopt
      );
    }

  public:
    /**
     * Create a Java/Kotlin-based struct by copying all values from the given C++ struct to Java.
     */
    [[maybe_unused]]
    static jni::local_ref<JMediaPreview::javaobject> fromCpp(const MediaPreview& value) {
      return newInstance(
        JResultType::fromCpp(value.type),
        value.path.has_value() ? jni::make_jstring(value.path.value()) : nullptr,
        value.thumbnail.has_value() ? jni::make_jstring(value.thumbnail.value()) : nullptr,
        value.localIdentifier.has_value() ? jni::make_jstring(value.localIdentifier.value()) : nullptr
      );
    }
  };

} // namespace margelo::nitro::multipleimagepicker
