///
/// JHybridMultipleImagePickerSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

#include "JHybridMultipleImagePickerSpec.hpp"

// Forward declaration of `NitroConfig` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct NitroConfig; }
// Forward declaration of `MediaType` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class MediaType; }
// Forward declaration of `PickerResult` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct PickerResult; }
// Forward declaration of `ResultType` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class ResultType; }
// Forward declaration of `SelectBoxStyle` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class SelectBoxStyle; }
// Forward declaration of `SelectMode` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class SelectMode; }
// Forward declaration of `PickerCropConfig` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct PickerCropConfig; }
// Forward declaration of `CropRatio` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct CropRatio; }
// Forward declaration of `Text` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct Text; }
// Forward declaration of `Language` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class Language; }
// Forward declaration of `Theme` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class Theme; }
// Forward declaration of `Presentation` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class Presentation; }
// Forward declaration of `PickerCameraConfig` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct PickerCameraConfig; }
// Forward declaration of `CameraDevice` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { enum class CameraDevice; }
// Forward declaration of `NitroCropConfig` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct NitroCropConfig; }
// Forward declaration of `CropResult` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct CropResult; }
// Forward declaration of `MediaPreview` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct MediaPreview; }
// Forward declaration of `NitroPreviewConfig` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct NitroPreviewConfig; }
// Forward declaration of `NitroCameraConfig` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct NitroCameraConfig; }
// Forward declaration of `CameraResult` to properly resolve imports.
namespace margelo::nitro::multipleimagepicker { struct CameraResult; }

#include "NitroConfig.hpp"
#include "JNitroConfig.hpp"
#include "MediaType.hpp"
#include "JMediaType.hpp"
#include <vector>
#include "PickerResult.hpp"
#include "JPickerResult.hpp"
#include <string>
#include <optional>
#include "ResultType.hpp"
#include "JResultType.hpp"
#include "SelectBoxStyle.hpp"
#include "JSelectBoxStyle.hpp"
#include "SelectMode.hpp"
#include "JSelectMode.hpp"
#include "PickerCropConfig.hpp"
#include "JPickerCropConfig.hpp"
#include "CropRatio.hpp"
#include "JCropRatio.hpp"
#include "Text.hpp"
#include "JText.hpp"
#include "Language.hpp"
#include "JLanguage.hpp"
#include "Theme.hpp"
#include "JTheme.hpp"
#include "Presentation.hpp"
#include "JPresentation.hpp"
#include "PickerCameraConfig.hpp"
#include "JPickerCameraConfig.hpp"
#include "CameraDevice.hpp"
#include "JCameraDevice.hpp"
#include <functional>
#include "JFunc_void_std__vector_PickerResult_.hpp"
#include "JFunc_void_double.hpp"
#include "NitroCropConfig.hpp"
#include "JNitroCropConfig.hpp"
#include "CropResult.hpp"
#include "JFunc_void_CropResult.hpp"
#include "JCropResult.hpp"
#include "MediaPreview.hpp"
#include "JMediaPreview.hpp"
#include "NitroPreviewConfig.hpp"
#include "JNitroPreviewConfig.hpp"
#include "NitroCameraConfig.hpp"
#include "JNitroCameraConfig.hpp"
#include "CameraResult.hpp"
#include "JFunc_void_CameraResult.hpp"
#include "JCameraResult.hpp"

namespace margelo::nitro::multipleimagepicker {

  jni::local_ref<JHybridMultipleImagePickerSpec::jhybriddata> JHybridMultipleImagePickerSpec::initHybrid(jni::alias_ref<jhybridobject> jThis) {
    return makeCxxInstance(jThis);
  }

  void JHybridMultipleImagePickerSpec::registerNatives() {
    registerHybrid({
      makeNativeMethod("initHybrid", JHybridMultipleImagePickerSpec::initHybrid),
    });
  }

  size_t JHybridMultipleImagePickerSpec::getExternalMemorySize() noexcept {
    static const auto method = javaClassStatic()->getMethod<jlong()>("getMemorySize");
    return method(_javaPart);
  }

  // Properties
  

  // Methods
  void JHybridMultipleImagePickerSpec::openPicker(const NitroConfig& config, const std::function<void(const std::vector<PickerResult>& /* result */)>& resolved, const std::function<void(double /* reject */)>& rejected) {
    static const auto method = javaClassStatic()->getMethod<void(jni::alias_ref<JNitroConfig> /* config */, jni::alias_ref<JFunc_void_std__vector_PickerResult_::javaobject> /* resolved */, jni::alias_ref<JFunc_void_double::javaobject> /* rejected */)>("openPicker_cxx");
    method(_javaPart, JNitroConfig::fromCpp(config), JFunc_void_std__vector_PickerResult__cxx::fromCpp(resolved), JFunc_void_double_cxx::fromCpp(rejected));
  }
  void JHybridMultipleImagePickerSpec::openCrop(const std::string& image, const NitroCropConfig& config, const std::function<void(const CropResult& /* result */)>& resolved, const std::function<void(double /* reject */)>& rejected) {
    static const auto method = javaClassStatic()->getMethod<void(jni::alias_ref<jni::JString> /* image */, jni::alias_ref<JNitroCropConfig> /* config */, jni::alias_ref<JFunc_void_CropResult::javaobject> /* resolved */, jni::alias_ref<JFunc_void_double::javaobject> /* rejected */)>("openCrop_cxx");
    method(_javaPart, jni::make_jstring(image), JNitroCropConfig::fromCpp(config), JFunc_void_CropResult_cxx::fromCpp(resolved), JFunc_void_double_cxx::fromCpp(rejected));
  }
  void JHybridMultipleImagePickerSpec::openPreview(const std::vector<MediaPreview>& media, double index, const NitroPreviewConfig& config, const std::function<void(double /* index */)>& onLongPress) {
    static const auto method = javaClassStatic()->getMethod<void(jni::alias_ref<jni::JArrayClass<JMediaPreview>> /* media */, double /* index */, jni::alias_ref<JNitroPreviewConfig> /* config */, jni::alias_ref<JFunc_void_double::javaobject> /* onLongPress */)>("openPreview_cxx");
    method(_javaPart, [&]() {
      size_t __size = media.size();
      jni::local_ref<jni::JArrayClass<JMediaPreview>> __array = jni::JArrayClass<JMediaPreview>::newArray(__size);
      for (size_t __i = 0; __i < __size; __i++) {
        const auto& __element = media[__i];
        __array->setElement(__i, *JMediaPreview::fromCpp(__element));
      }
      return __array;
    }(), index, JNitroPreviewConfig::fromCpp(config), JFunc_void_double_cxx::fromCpp(onLongPress));
  }
  void JHybridMultipleImagePickerSpec::openCamera(const NitroCameraConfig& config, const std::function<void(const CameraResult& /* result */)>& resolved, const std::function<void(double /* reject */)>& rejected) {
    static const auto method = javaClassStatic()->getMethod<void(jni::alias_ref<JNitroCameraConfig> /* config */, jni::alias_ref<JFunc_void_CameraResult::javaobject> /* resolved */, jni::alias_ref<JFunc_void_double::javaobject> /* rejected */)>("openCamera_cxx");
    method(_javaPart, JNitroCameraConfig::fromCpp(config), JFunc_void_CameraResult_cxx::fromCpp(resolved), JFunc_void_double_cxx::fromCpp(rejected));
  }

} // namespace margelo::nitro::multipleimagepicker
