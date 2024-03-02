# Tic-Tac-Toe Game in C++

## Overview

This is a simple implementation of a console-based Tic-Tac-Toe game in C++. The game features a 3x3 board where players take turns entering a square number (1-9) to place their symbol ('X' or 'O') on the board. The game checks for a win by determining if any player has three consecutive symbols horizontally, vertically, or diagonally. The game ends in a draw if all 9 turns are completed without a winner.

## Code Structure

### Global Variables

- `i` and `j`: Represent the row and column of the Tic-Tac-Toe board.
- `board[3][3]`: Represents the 3x3 Tic-Tac-Toe board, initially filled with numbers 1 to 9.
  
### Functions

1. `squarenumber(int num)`: Determines the row and column of the board based on the square number entered by the user.

2. `checkBoard(int number)`: Checks if a square on the board is already filled with 'X' or 'O'.

3. `checkWin()`: Checks if there is a winner by examining all possible winning combinations horizontally, vertically, and diagonally.

### Main Function

- A loop continues until the game is won or ends in a draw.
- Players take turns entering a square number, and the program validates the input.
- The program checks for a winner after each turn and outputs the result.
- The game ends when a player wins, or it's a draw.

## Execution

1. Players are prompted to enter a square number (1-9) to place their symbol ('X' or 'O') on the board.
2. The game checks for a winner after each turn.
3. If a player wins, the game announces the winner ('PLAYER X WINS' or 'PLAYER O WINS').
4. If all 9 turns are completed without a winner, the game announces a draw.

## User Interaction

- Players enter square numbers to make moves.
- Invalid inputs are handled, and players are prompted to try again.
- The game can be terminated by entering a negative number.

## Note

- The game uses a simple console interface and is intended for educational purposes.

