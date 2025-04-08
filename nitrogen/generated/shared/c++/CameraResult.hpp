///
/// CameraResult.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/JSIConverter.hpp>)
#include <NitroModules/JSIConverter.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif
#if __has_include(<NitroModules/NitroDefines.hpp>)
#include <NitroModules/NitroDefines.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `ResultType` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class ResultType; }

#include <string>
#include "ResultType.hpp"
#include <optional>

namespace margelo::nitro::multipleimagepicker {

  /**
   * A struct which can be represented as a JavaScript object (CameraResult).
   */
  struct CameraResult {
  public:
    std::string path     SWIFT_PRIVATE;
    ResultType type     SWIFT_PRIVATE;
    std::optional<double> width     SWIFT_PRIVATE;
    std::optional<double> height     SWIFT_PRIVATE;
    std::optional<double> duration     SWIFT_PRIVATE;
    std::optional<std::string> thumbnail     SWIFT_PRIVATE;
    std::optional<std::string> fileName     SWIFT_PRIVATE;

  public:
    explicit CameraResult(std::string path, ResultType type, std::optional<double> width, std::optional<double> height, std::optional<double> duration, std::optional<std::string> thumbnail, std::optional<std::string> fileName): path(path), type(type), width(width), height(height), duration(duration), thumbnail(thumbnail), fileName(fileName) {}
  };

} // namespace margelo::nitro::multipleimagepicker

namespace margelo::nitro {

  using namespace margelo::nitro::multipleimagepicker;

  // C++ CameraResult <> JS CameraResult (object)
  template <>
  struct JSIConverter<CameraResult> {
    static inline CameraResult fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      jsi::Object obj = arg.asObject(runtime);
      return CameraResult(
        JSIConverter<std::string>::fromJSI(runtime, obj.getProperty(runtime, "path")),
        JSIConverter<ResultType>::fromJSI(runtime, obj.getProperty(runtime, "type")),
        JSIConverter<std::optional<double>>::fromJSI(runtime, obj.getProperty(runtime, "width")),
        JSIConverter<std::optional<double>>::fromJSI(runtime, obj.getProperty(runtime, "height")),
        JSIConverter<std::optional<double>>::fromJSI(runtime, obj.getProperty(runtime, "duration")),
        JSIConverter<std::optional<std::string>>::fromJSI(runtime, obj.getProperty(runtime, "thumbnail")),
        JSIConverter<std::optional<std::string>>::fromJSI(runtime, obj.getProperty(runtime, "fileName"))
      );
    }
    static inline jsi::Value toJSI(jsi::Runtime& runtime, const CameraResult& arg) {
      jsi::Object obj(runtime);
      obj.setProperty(runtime, "path", JSIConverter<std::string>::toJSI(runtime, arg.path));
      obj.setProperty(runtime, "type", JSIConverter<ResultType>::toJSI(runtime, arg.type));
      obj.setProperty(runtime, "width", JSIConverter<std::optional<double>>::toJSI(runtime, arg.width));
      obj.setProperty(runtime, "height", JSIConverter<std::optional<double>>::toJSI(runtime, arg.height));
      obj.setProperty(runtime, "duration", JSIConverter<std::optional<double>>::toJSI(runtime, arg.duration));
      obj.setProperty(runtime, "thumbnail", JSIConverter<std::optional<std::string>>::toJSI(runtime, arg.thumbnail));
      obj.setProperty(runtime, "fileName", JSIConverter<std::optional<std::string>>::toJSI(runtime, arg.fileName));
      return obj;
    }
    static inline bool canConvert(jsi::Runtime& runtime, const jsi::Value& value) {
      if (!value.isObject()) {
        return false;
      }
      jsi::Object obj = value.getObject(runtime);
      if (!JSIConverter<std::string>::canConvert(runtime, obj.getProperty(runtime, "path"))) return false;
      if (!JSIConverter<ResultType>::canConvert(runtime, obj.getProperty(runtime, "type"))) return false;
      if (!JSIConverter<std::optional<double>>::canConvert(runtime, obj.getProperty(runtime, "width"))) return false;
      if (!JSIConverter<std::optional<double>>::canConvert(runtime, obj.getProperty(runtime, "height"))) return false;
      if (!JSIConverter<std::optional<double>>::canConvert(runtime, obj.getProperty(runtime, "duration"))) return false;
      if (!JSIConverter<std::optional<std::string>>::canConvert(runtime, obj.getProperty(runtime, "thumbnail"))) return false;
      if (!JSIConverter<std::optional<std::string>>::canConvert(runtime, obj.getProperty(runtime, "fileName"))) return false;
      return true;
    }
  };

} // namespace margelo::nitro
