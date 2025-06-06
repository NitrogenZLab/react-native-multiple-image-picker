///
/// MediaPreview.hpp
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

#include "ResultType.hpp"
#include <optional>
#include <string>

namespace margelo::nitro::multipleimagepicker {

  /**
   * A struct which can be represented as a JavaScript object (MediaPreview).
   */
  struct MediaPreview {
  public:
    ResultType type     SWIFT_PRIVATE;
    std::optional<std::string> path     SWIFT_PRIVATE;
    std::optional<std::string> thumbnail     SWIFT_PRIVATE;
    std::optional<std::string> localIdentifier     SWIFT_PRIVATE;

  public:
    MediaPreview() = default;
    explicit MediaPreview(ResultType type, std::optional<std::string> path, std::optional<std::string> thumbnail, std::optional<std::string> localIdentifier): type(type), path(path), thumbnail(thumbnail), localIdentifier(localIdentifier) {}
  };

} // namespace margelo::nitro::multipleimagepicker

namespace margelo::nitro {

  using namespace margelo::nitro::multipleimagepicker;

  // C++ MediaPreview <> JS MediaPreview (object)
  template <>
  struct JSIConverter<MediaPreview> final {
    static inline MediaPreview fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      jsi::Object obj = arg.asObject(runtime);
      return MediaPreview(
        JSIConverter<ResultType>::fromJSI(runtime, obj.getProperty(runtime, "type")),
        JSIConverter<std::optional<std::string>>::fromJSI(runtime, obj.getProperty(runtime, "path")),
        JSIConverter<std::optional<std::string>>::fromJSI(runtime, obj.getProperty(runtime, "thumbnail")),
        JSIConverter<std::optional<std::string>>::fromJSI(runtime, obj.getProperty(runtime, "localIdentifier"))
      );
    }
    static inline jsi::Value toJSI(jsi::Runtime& runtime, const MediaPreview& arg) {
      jsi::Object obj(runtime);
      obj.setProperty(runtime, "type", JSIConverter<ResultType>::toJSI(runtime, arg.type));
      obj.setProperty(runtime, "path", JSIConverter<std::optional<std::string>>::toJSI(runtime, arg.path));
      obj.setProperty(runtime, "thumbnail", JSIConverter<std::optional<std::string>>::toJSI(runtime, arg.thumbnail));
      obj.setProperty(runtime, "localIdentifier", JSIConverter<std::optional<std::string>>::toJSI(runtime, arg.localIdentifier));
      return obj;
    }
    static inline bool canConvert(jsi::Runtime& runtime, const jsi::Value& value) {
      if (!value.isObject()) {
        return false;
      }
      jsi::Object obj = value.getObject(runtime);
      if (!JSIConverter<ResultType>::canConvert(runtime, obj.getProperty(runtime, "type"))) return false;
      if (!JSIConverter<std::optional<std::string>>::canConvert(runtime, obj.getProperty(runtime, "path"))) return false;
      if (!JSIConverter<std::optional<std::string>>::canConvert(runtime, obj.getProperty(runtime, "thumbnail"))) return false;
      if (!JSIConverter<std::optional<std::string>>::canConvert(runtime, obj.getProperty(runtime, "localIdentifier"))) return false;
      return true;
    }
  };

} // namespace margelo::nitro
