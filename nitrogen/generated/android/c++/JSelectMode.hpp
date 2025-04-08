///
/// JSelectMode.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "SelectMode.hpp"

namespace margelo::nitro::multipleimagepicker {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ enum "SelectMode" and the the Kotlin enum "SelectMode".
   */
  struct JSelectMode final: public jni::JavaClass<JSelectMode> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/multipleimagepicker/SelectMode;";

  public:
    /**
     * Convert this Java/Kotlin-based enum to the C++ enum SelectMode.
     */
    [[maybe_unused]]
    SelectMode toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldOrdinal = clazz->getField<int>("_ordinal");
      int ordinal = this->getFieldValue(fieldOrdinal);
      return static_cast<SelectMode>(ordinal);
    }

  public:
    /**
     * Create a Java/Kotlin-based enum with the given C++ enum's value.
     */
    [[maybe_unused]]
    static jni::alias_ref<JSelectMode> fromCpp(SelectMode value) {
      static const auto clazz = javaClassStatic();
      static const auto fieldSINGLE = clazz->getStaticField<JSelectMode>("SINGLE");
      static const auto fieldMULTIPLE = clazz->getStaticField<JSelectMode>("MULTIPLE");
      
      switch (value) {
        case SelectMode::SINGLE:
          return clazz->getStaticFieldValue(fieldSINGLE);
        case SelectMode::MULTIPLE:
          return clazz->getStaticFieldValue(fieldMULTIPLE);
        default:
          std::string stringValue = std::to_string(static_cast<int>(value));
          throw std::invalid_argument("Invalid enum value (" + stringValue + "!");
      }
    }
  };

} // namespace margelo::nitro::multipleimagepicker
