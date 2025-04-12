///
/// JLanguage.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "Language.hpp"

namespace margelo::nitro::multipleimagepicker {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ enum "Language" and the the Kotlin enum "Language".
   */
  struct JLanguage final: public jni::JavaClass<JLanguage> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/multipleimagepicker/Language;";

  public:
    /**
     * Convert this Java/Kotlin-based enum to the C++ enum Language.
     */
    [[maybe_unused]]
    [[nodiscard]]
    Language toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldOrdinal = clazz->getField<int>("_ordinal");
      int ordinal = this->getFieldValue(fieldOrdinal);
      return static_cast<Language>(ordinal);
    }

  public:
    /**
     * Create a Java/Kotlin-based enum with the given C++ enum's value.
     */
    [[maybe_unused]]
    static jni::alias_ref<JLanguage> fromCpp(Language value) {
      static const auto clazz = javaClassStatic();
      static const auto fieldSYSTEM = clazz->getStaticField<JLanguage>("SYSTEM");
      static const auto fieldZH_HANS = clazz->getStaticField<JLanguage>("ZH_HANS");
      static const auto fieldZH_HANT = clazz->getStaticField<JLanguage>("ZH_HANT");
      static const auto fieldJA = clazz->getStaticField<JLanguage>("JA");
      static const auto fieldKO = clazz->getStaticField<JLanguage>("KO");
      static const auto fieldEN = clazz->getStaticField<JLanguage>("EN");
      static const auto fieldTH = clazz->getStaticField<JLanguage>("TH");
      static const auto fieldID = clazz->getStaticField<JLanguage>("ID");
      static const auto fieldVI = clazz->getStaticField<JLanguage>("VI");
      static const auto fieldRU = clazz->getStaticField<JLanguage>("RU");
      static const auto fieldDE = clazz->getStaticField<JLanguage>("DE");
      static const auto fieldFR = clazz->getStaticField<JLanguage>("FR");
      static const auto fieldAR = clazz->getStaticField<JLanguage>("AR");
      
      switch (value) {
        case Language::SYSTEM:
          return clazz->getStaticFieldValue(fieldSYSTEM);
        case Language::ZH_HANS:
          return clazz->getStaticFieldValue(fieldZH_HANS);
        case Language::ZH_HANT:
          return clazz->getStaticFieldValue(fieldZH_HANT);
        case Language::JA:
          return clazz->getStaticFieldValue(fieldJA);
        case Language::KO:
          return clazz->getStaticFieldValue(fieldKO);
        case Language::EN:
          return clazz->getStaticFieldValue(fieldEN);
        case Language::TH:
          return clazz->getStaticFieldValue(fieldTH);
        case Language::ID:
          return clazz->getStaticFieldValue(fieldID);
        case Language::VI:
          return clazz->getStaticFieldValue(fieldVI);
        case Language::RU:
          return clazz->getStaticFieldValue(fieldRU);
        case Language::DE:
          return clazz->getStaticFieldValue(fieldDE);
        case Language::FR:
          return clazz->getStaticFieldValue(fieldFR);
        case Language::AR:
          return clazz->getStaticFieldValue(fieldAR);
        default:
          std::string stringValue = std::to_string(static_cast<int>(value));
          throw std::invalid_argument("Invalid enum value (" + stringValue + "!");
      }
    }
  };

} // namespace margelo::nitro::multipleimagepicker
