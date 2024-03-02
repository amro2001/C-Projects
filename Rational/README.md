# Rational Class in C++

## Overview

This C++ code defines a `Rational` class representing rational fractions with various operations. The class includes constructors, move and copy constructors, overloaded operators for arithmetic operations (`+`, `-`, `*`, `/`), compound assignment operators (`+=`, `-=`, `*=`, `/=`), as well as functions for printing, scanning, and converting rational fractions to double.

## Class Definition

### Data Members

- `numerator`: Represents the numerator of the rational fraction.
- `denominator`: Represents the denominator of the rational fraction.

### Member Functions

1. `print(ostream& Out)`: Outputs the rational fraction in the form x/y.

2. `scan(istream& In)`: Reads input to initialize the numerator and denominator.

3. `toDouble()`: Converts the rational fraction to a double.

4. Overloaded operators:
    - `=`: Assigns the values of the right-hand side rational fraction to the left-hand side.
    - `+`: Adds two rational fractions.
    - `-`: Subtracts one rational fraction from another.
    - `*`: Multiplies two rational fractions.
    - `/`: Divides one rational fraction by another.

5. Compound assignment operators:
    - `+=`: Adds the right-hand side rational fraction to the left-hand side.
    - `-=`: Subtracts the right-hand side rational fraction from the left-hand side.
    - `*=`: Multiplies the left-hand side by the right-hand side.
    - `/=`: Divides the left-hand side by the right-hand side.

6. Move and copy constructors.

## Usage

```cpp
// Example usage of Rational class
Rational r1(2, 3);
Rational r2(1, 4);

// Performing arithmetic operations
Rational result = r1 + r2;
result.print(cout); // Outputs the sum

// Updating a Rational using compound assignment
r1 += r2;
r1.print(cout); // Outputs the updated value of r1
