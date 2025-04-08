///
/// Text.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

import NitroModules

/**
 * Represents an instance of `Text`, backed by a C++ struct.
 */
public typealias Text = margelo.nitro.multipleimagepicker.Text

public extension Text {
  private typealias bridge = margelo.nitro.multipleimagepicker.bridge.swift

  /**
   * Create a new instance of `Text`.
   */
  init(finish: String?, original: String?, preview: String?, edit: String?) {
    self.init({ () -> bridge.std__optional_std__string_ in
      if let __unwrappedValue = finish {
        return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
      } else {
        return .init()
      }
    }(), { () -> bridge.std__optional_std__string_ in
      if let __unwrappedValue = original {
        return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
      } else {
        return .init()
      }
    }(), { () -> bridge.std__optional_std__string_ in
      if let __unwrappedValue = preview {
        return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
      } else {
        return .init()
      }
    }(), { () -> bridge.std__optional_std__string_ in
      if let __unwrappedValue = edit {
        return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
      } else {
        return .init()
      }
    }())
  }

  var finish: String? {
    @inline(__always)
    get {
      return { () -> String? in
        if let __unwrapped = self.__finish.value {
          return String(__unwrapped)
        } else {
          return nil
        }
      }()
    }
    @inline(__always)
    set {
      self.__finish = { () -> bridge.std__optional_std__string_ in
        if let __unwrappedValue = newValue {
          return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
        } else {
          return .init()
        }
      }()
    }
  }
  
  var original: String? {
    @inline(__always)
    get {
      return { () -> String? in
        if let __unwrapped = self.__original.value {
          return String(__unwrapped)
        } else {
          return nil
        }
      }()
    }
    @inline(__always)
    set {
      self.__original = { () -> bridge.std__optional_std__string_ in
        if let __unwrappedValue = newValue {
          return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
        } else {
          return .init()
        }
      }()
    }
  }
  
  var preview: String? {
    @inline(__always)
    get {
      return { () -> String? in
        if let __unwrapped = self.__preview.value {
          return String(__unwrapped)
        } else {
          return nil
        }
      }()
    }
    @inline(__always)
    set {
      self.__preview = { () -> bridge.std__optional_std__string_ in
        if let __unwrappedValue = newValue {
          return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
        } else {
          return .init()
        }
      }()
    }
  }
  
  var edit: String? {
    @inline(__always)
    get {
      return { () -> String? in
        if let __unwrapped = self.__edit.value {
          return String(__unwrapped)
        } else {
          return nil
        }
      }()
    }
    @inline(__always)
    set {
      self.__edit = { () -> bridge.std__optional_std__string_ in
        if let __unwrappedValue = newValue {
          return bridge.create_std__optional_std__string_(std.string(__unwrappedValue))
        } else {
          return .init()
        }
      }()
    }
  }
}
