///
/// SelectBoxStyle.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2025 Marc Rousavy @ Margelo
///

/**
 * Represents the JS union `SelectBoxStyle`, backed by a C++ enum.
 */
public typealias SelectBoxStyle = margelo.nitro.multipleimagepicker.SelectBoxStyle

public extension SelectBoxStyle {
  /**
   * Get a SelectBoxStyle for the given String value, or
   * return `nil` if the given value was invalid/unknown.
   */
  init?(fromString string: String) {
    switch string {
      case "number":
        self = .number
      case "tick":
        self = .tick
      default:
        return nil
    }
  }

  /**
   * Get the String value this SelectBoxStyle represents.
   */
  var stringValue: String {
    switch self {
      case .number:
        return "number"
      case .tick:
        return "tick"
    }
  }
}
