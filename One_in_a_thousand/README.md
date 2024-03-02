# Number Guessing Game in C++

## Overview

This C++ code implements a simple number guessing game where the program attempts to guess a number between 1 and 1000 in only 10 questions. The binary search algorithm is used to narrow down the possible range of numbers based on the user's responses.

## Program Structure

- **Variables:**
  - `response`: Character variable to store user responses ('y' or 'n') to determine new start and end ranges.
  - `StartRange`, `EndRange`, `Mid`: Double variables to store the beginning and end of the range and calculate the middle of the range.
  
- **Main Function:**
  - Initializes the range from 1 to 1000 and checks if the number to be guessed (passed as a command line argument) is within this range.
  - Loops 10 times, asking the user if their number is less than the calculated midpoint of the current range.
  - Adjusts the range based on the user's response using the binary search algorithm.
  - Outputs the guessed number based on the last response and the narrowed-down range.

## Usage
```cpp
// Example usage of the Number Guessing Game
// Pass the number to be guessed as a command line argument
```
1. **Compile the C++ Source Code:**
   ```bash
   g++ guess.cpp -o guess
2. **Run the Program**
    ```bash
    ./guess 567