///
/// JFunc_void_CropResult.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include <functional>

#include <functional>
#include "CropResult.hpp"
#include "JCropResult.hpp"
#include <string>

namespace margelo::nitro::multipleimagepicker {

  using namespace facebook;

  /**
   * C++ representation of the callback Func_void_CropResult.
   * This is a Kotlin `(result: CropResult) -> Unit`, backed by a `std::function<...>`.
   */
  struct JFunc_void_CropResult final: public jni::HybridClass<JFunc_void_CropResult> {
  public:
    static jni::local_ref<JFunc_void_CropResult::javaobject> fromCpp(const std::function<void(const CropResult& /* result */)>& func) {
      return JFunc_void_CropResult::newObjectCxxArgs(func);
    }

  public:
    void call(jni::alias_ref<JCropResult> result) {
      _func(result->toCpp());
    }

  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/multipleimagepicker/Func_void_CropResult;";
    static void registerNatives() {
      registerHybrid({makeNativeMethod("call", JFunc_void_CropResult::call)});
    }

  private:
    explicit JFunc_void_CropResult(const std::function<void(const CropResult& /* result */)>& func): _func(func) { }

  private:
    friend HybridBase;
    std::function<void(const CropResult& /* result */)> _func;
  };

} // namespace margelo::nitro::multipleimagepicker
