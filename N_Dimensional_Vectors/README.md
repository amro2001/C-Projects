# C++ Vector Class

## Overview

This C++ code defines a basic `Vector` class template with functionalities for vector operations such as addition, subtraction, dot product, and more. The vector class is templated on the size of the vector (`N`) and includes common vector operations.

## Vector Class

The `Vector` class includes the following member functions:

- **Constructor:**
  - Initializes a vector with all components set to zero.

- **Copy Constructor:**
  - Creates a new vector with components copied from another vector.

- **`getComponent(int i)` Function:**
  - Retrieves the value of the component at index `i`.

- **`setComponent(int i, float value)` Function:**
  - Sets the value of the component at index `i` to the specified `value`.

- **`magnitude()` Function:**
  - Calculates and returns the magnitude (length) of the vector.

- **`dot(Vector<N> v)` Function:**
  - Calculates and returns the dot product of the vector with another vector `v`.

## Operator Overloading

The code also includes overloaded operators for vector addition (`+`) and subtraction (`-`). These operators allow for intuitive vector operations.

## Example Usage

```cpp
#include <iostream>
#include "Vector.h"

int main() {
    // Example usage of the Vector class
    Vector<3> v1; // Creates a 3-dimensional vector with components initialized to zero
    v1.setComponent(0, 1.0f);
    v1.setComponent(1, 2.0f);
    v1.setComponent(2, 3.0f);

    Vector<3> v2(4.0f, 5.0f, 6.0f); // Creates a 3-dimensional vector with specified components

    Vector<3> sum = v1 + v2; // Vector addition
    Vector<3> difference = v1 - v2; // Vector subtraction

    std::cout << "Vector 1: " << v1.getComponent(0) << ", " << v1.getComponent(1) << ", " << v1.getComponent(2) << std::endl;
    std::cout << "Vector 2: " << v2.getComponent(0) << ", " << v2.getComponent(1) << ", " << v2.getComponent(2) << std::endl;
    std::cout << "Sum: " << sum.getComponent(0) << ", " << sum.getComponent(1) << ", " << sum.getComponent(2) << std::endl;
    std::cout << "Difference: " << difference.getComponent(0) << ", " << difference.getComponent(1) << ", " << difference.getComponent(2) << std::endl;

    return 0;
}
