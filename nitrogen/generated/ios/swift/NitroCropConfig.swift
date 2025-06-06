///
/// NitroCropConfig.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

import NitroModules

/**
 * Represents an instance of `NitroCropConfig`, backed by a C++ struct.
 */
public typealias NitroCropConfig = margelo.nitro.multipleimagepicker.NitroCropConfig

public extension NitroCropConfig {
  private typealias bridge = margelo.nitro.multipleimagepicker.bridge.swift

  /**
   * Create a new instance of `NitroCropConfig`.
   */
  init(language: Language, presentation: Presentation, circle: Bool?, ratio: [CropRatio], defaultRatio: CropRatio?, freeStyle: Bool?) {
    self.init(language, presentation, { () -> bridge.std__optional_bool_ in
      if let __unwrappedValue = circle {
        return bridge.create_std__optional_bool_(__unwrappedValue)
      } else {
        return .init()
      }
    }(), { () -> bridge.std__vector_CropRatio_ in
      var __vector = bridge.create_std__vector_CropRatio_(ratio.count)
      for __item in ratio {
        __vector.push_back(__item)
      }
      return __vector
    }(), { () -> bridge.std__optional_CropRatio_ in
      if let __unwrappedValue = defaultRatio {
        return bridge.create_std__optional_CropRatio_(__unwrappedValue)
      } else {
        return .init()
      }
    }(), { () -> bridge.std__optional_bool_ in
      if let __unwrappedValue = freeStyle {
        return bridge.create_std__optional_bool_(__unwrappedValue)
      } else {
        return .init()
      }
    }())
  }

  var language: Language {
    @inline(__always)
    get {
      return self.__language
    }
    @inline(__always)
    set {
      self.__language = newValue
    }
  }
  
  var presentation: Presentation {
    @inline(__always)
    get {
      return self.__presentation
    }
    @inline(__always)
    set {
      self.__presentation = newValue
    }
  }
  
  var circle: Bool? {
    @inline(__always)
    get {
      return self.__circle.value
    }
    @inline(__always)
    set {
      self.__circle = { () -> bridge.std__optional_bool_ in
        if let __unwrappedValue = newValue {
          return bridge.create_std__optional_bool_(__unwrappedValue)
        } else {
          return .init()
        }
      }()
    }
  }
  
  var ratio: [CropRatio] {
    @inline(__always)
    get {
      return self.__ratio.map({ __item in __item })
    }
    @inline(__always)
    set {
      self.__ratio = { () -> bridge.std__vector_CropRatio_ in
        var __vector = bridge.create_std__vector_CropRatio_(newValue.count)
        for __item in newValue {
          __vector.push_back(__item)
        }
        return __vector
      }()
    }
  }
  
  var defaultRatio: CropRatio? {
    @inline(__always)
    get {
      return { () -> CropRatio? in
        if let __unwrapped = self.__defaultRatio.value {
          return __unwrapped
        } else {
          return nil
        }
      }()
    }
    @inline(__always)
    set {
      self.__defaultRatio = { () -> bridge.std__optional_CropRatio_ in
        if let __unwrappedValue = newValue {
          return bridge.create_std__optional_CropRatio_(__unwrappedValue)
        } else {
          return .init()
        }
      }()
    }
  }
  
  var freeStyle: Bool? {
    @inline(__always)
    get {
      return self.__freeStyle.value
    }
    @inline(__always)
    set {
      self.__freeStyle = { () -> bridge.std__optional_bool_ in
        if let __unwrappedValue = newValue {
          return bridge.create_std__optional_bool_(__unwrappedValue)
        } else {
          return .init()
        }
      }()
    }
  }
}
