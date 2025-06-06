///
/// HybridMultipleImagePickerSpec_cxx.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

import Foundation
import NitroModules

/**
 * A class implementation that bridges HybridMultipleImagePickerSpec over to C++.
 * In C++, we cannot use Swift protocols - so we need to wrap it in a class to make it strongly defined.
 *
 * Also, some Swift types need to be bridged with special handling:
 * - Enums need to be wrapped in Structs, otherwise they cannot be accessed bi-directionally (Swift bug: https://github.com/swiftlang/swift/issues/75330)
 * - Other HybridObjects need to be wrapped/unwrapped from the Swift TCxx wrapper
 * - Throwing methods need to be wrapped with a Result<T, Error> type, as exceptions cannot be propagated to C++
 */
public class HybridMultipleImagePickerSpec_cxx {
  /**
   * The Swift <> C++ bridge's namespace (`margelo::nitro::multipleimagepicker::bridge::swift`)
   * from `MultipleImagePicker-Swift-Cxx-Bridge.hpp`.
   * This contains specialized C++ templates, and C++ helper functions that can be accessed from Swift.
   */
  public typealias bridge = margelo.nitro.multipleimagepicker.bridge.swift

  /**
   * Holds an instance of the `HybridMultipleImagePickerSpec` Swift protocol.
   */
  private var __implementation: any HybridMultipleImagePickerSpec

  /**
   * Holds a weak pointer to the C++ class that wraps the Swift class.
   */
  private var __cxxPart: bridge.std__weak_ptr_margelo__nitro__multipleimagepicker__HybridMultipleImagePickerSpec_

  /**
   * Create a new `HybridMultipleImagePickerSpec_cxx` that wraps the given `HybridMultipleImagePickerSpec`.
   * All properties and methods bridge to C++ types.
   */
  public init(_ implementation: any HybridMultipleImagePickerSpec) {
    self.__implementation = implementation
    self.__cxxPart = .init()
    /* no base class */
  }

  /**
   * Get the actual `HybridMultipleImagePickerSpec` instance this class wraps.
   */
  @inline(__always)
  public func getHybridMultipleImagePickerSpec() -> any HybridMultipleImagePickerSpec {
    return __implementation
  }

  /**
   * Casts this instance to a retained unsafe raw pointer.
   * This acquires one additional strong reference on the object!
   */
  public func toUnsafe() -> UnsafeMutableRawPointer {
    return Unmanaged.passRetained(self).toOpaque()
  }

  /**
   * Casts an unsafe pointer to a `HybridMultipleImagePickerSpec_cxx`.
   * The pointer has to be a retained opaque `Unmanaged<HybridMultipleImagePickerSpec_cxx>`.
   * This removes one strong reference from the object!
   */
  public class func fromUnsafe(_ pointer: UnsafeMutableRawPointer) -> HybridMultipleImagePickerSpec_cxx {
    return Unmanaged<HybridMultipleImagePickerSpec_cxx>.fromOpaque(pointer).takeRetainedValue()
  }

  /**
   * Gets (or creates) the C++ part of this Hybrid Object.
   * The C++ part is a `std::shared_ptr<margelo::nitro::multipleimagepicker::HybridMultipleImagePickerSpec>`.
   */
  public func getCxxPart() -> bridge.std__shared_ptr_margelo__nitro__multipleimagepicker__HybridMultipleImagePickerSpec_ {
    let cachedCxxPart = self.__cxxPart.lock()
    if cachedCxxPart.__convertToBool() {
      return cachedCxxPart
    } else {
      let newCxxPart = bridge.create_std__shared_ptr_margelo__nitro__multipleimagepicker__HybridMultipleImagePickerSpec_(self.toUnsafe())
      __cxxPart = bridge.weakify_std__shared_ptr_margelo__nitro__multipleimagepicker__HybridMultipleImagePickerSpec_(newCxxPart)
      return newCxxPart
    }
  }

  

  /**
   * Get the memory size of the Swift class (plus size of any other allocations)
   * so the JS VM can properly track it and garbage-collect the JS object if needed.
   */
  @inline(__always)
  public var memorySize: Int {
    return MemoryHelper.getSizeOf(self.__implementation) + self.__implementation.memorySize
  }

  // Properties
  

  // Methods
  @inline(__always)
  public final func openPicker(config: NitroConfig, resolved: bridge.Func_void_std__vector_PickerResult_, rejected: bridge.Func_void_double) -> bridge.Result_void_ {
    do {
      try self.__implementation.openPicker(config: config, resolved: { () -> ([PickerResult]) -> Void in
        let __wrappedFunction = bridge.wrap_Func_void_std__vector_PickerResult_(resolved)
        return { (__result: [PickerResult]) -> Void in
          __wrappedFunction.call({ () -> bridge.std__vector_PickerResult_ in
            var __vector = bridge.create_std__vector_PickerResult_(__result.count)
            for __item in __result {
              __vector.push_back(__item)
            }
            return __vector
          }())
        }
      }(), rejected: { () -> (Double) -> Void in
        let __wrappedFunction = bridge.wrap_Func_void_double(rejected)
        return { (__reject: Double) -> Void in
          __wrappedFunction.call(__reject)
        }
      }())
      return bridge.create_Result_void_()
    } catch (let __error) {
      let __exceptionPtr = __error.toCpp()
      return bridge.create_Result_void_(__exceptionPtr)
    }
  }
  
  @inline(__always)
  public final func openCrop(image: std.string, config: NitroCropConfig, resolved: bridge.Func_void_CropResult, rejected: bridge.Func_void_double) -> bridge.Result_void_ {
    do {
      try self.__implementation.openCrop(image: String(image), config: config, resolved: { () -> (CropResult) -> Void in
        let __wrappedFunction = bridge.wrap_Func_void_CropResult(resolved)
        return { (__result: CropResult) -> Void in
          __wrappedFunction.call(__result)
        }
      }(), rejected: { () -> (Double) -> Void in
        let __wrappedFunction = bridge.wrap_Func_void_double(rejected)
        return { (__reject: Double) -> Void in
          __wrappedFunction.call(__reject)
        }
      }())
      return bridge.create_Result_void_()
    } catch (let __error) {
      let __exceptionPtr = __error.toCpp()
      return bridge.create_Result_void_(__exceptionPtr)
    }
  }
  
  @inline(__always)
  public final func openPreview(media: bridge.std__vector_MediaPreview_, index: Double, config: NitroPreviewConfig, onLongPress: bridge.Func_void_double) -> bridge.Result_void_ {
    do {
      try self.__implementation.openPreview(media: media.map({ __item in __item }), index: index, config: config, onLongPress: { () -> (Double) -> Void in
        let __wrappedFunction = bridge.wrap_Func_void_double(onLongPress)
        return { (__index: Double) -> Void in
          __wrappedFunction.call(__index)
        }
      }())
      return bridge.create_Result_void_()
    } catch (let __error) {
      let __exceptionPtr = __error.toCpp()
      return bridge.create_Result_void_(__exceptionPtr)
    }
  }
  
  @inline(__always)
  public final func openCamera(config: NitroCameraConfig, resolved: bridge.Func_void_CameraResult, rejected: bridge.Func_void_double) -> bridge.Result_void_ {
    do {
      try self.__implementation.openCamera(config: config, resolved: { () -> (CameraResult) -> Void in
        let __wrappedFunction = bridge.wrap_Func_void_CameraResult(resolved)
        return { (__result: CameraResult) -> Void in
          __wrappedFunction.call(__result)
        }
      }(), rejected: { () -> (Double) -> Void in
        let __wrappedFunction = bridge.wrap_Func_void_double(rejected)
        return { (__reject: Double) -> Void in
          __wrappedFunction.call(__reject)
        }
      }())
      return bridge.create_Result_void_()
    } catch (let __error) {
      let __exceptionPtr = __error.toCpp()
      return bridge.create_Result_void_(__exceptionPtr)
    }
  }
}
