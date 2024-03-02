#include <iostream>
using namespace std;
// Declaring global varibales where i is row and j is column of the tictac board
int i, j;
// Declaring the tictactoe board and initialising it with numbers 1 to 9
char board[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
// Function to determine the row and column of board given the square number entered by user
void squarenumber(int num)
{
    if (num == 1)
    {
        i = 0;
        j = 0;
    }
    else if (num == 2)
    {
        i = 0;
        j = 1;
    }
    else if (num == 3)
    {
        i = 0;
        j = 2;
    }
    else if (num == 4)
    {
        i = 1;
        j = 0;
    }
    else if (num == 5)
    {
        i = 1;
        j = 1;
    }
    else if (num == 6)
    {
        i = 1;
        j = 2;
    }
    else if (num == 7)
    {
        i = 2;
        j = 0;
    }
    else if (num == 8)
    {
        i = 2;
        j = 1;
    }
    else if (num == 9)
    {
        i = 2;
        j = 2;
    }
}
// Function to determine whether the squarenumber entered by the user already contains an X or O
bool checkBoard(int number)
{
    squarenumber(number);
    if (board[i][j] == 'X' || board[i][j] == 'O')
    {
        return false;
    }
    else
    {
        return true;
    }
}
//Function to check whether a player have 3 consecutive squares, either horizontally, vertically or diagonally
bool checkWin()
{
    if ((board[0][0] == board[0][1]) && (board[0][0] == board[0][2]))
    {
        return true;
    }
    else if ((board[1][0] == board[1][1]) && (board[1][0] == board[1][2]))
    {
        return true;
    }
    else if ((board[2][0] == board[2][1]) && (board[2][0] == board[2][2]))
    {
        return true;
    }
    else if ((board[0][0] == board[1][0]) && (board[0][0] == board[2][0]))
    {
        return true;
    }
    else if ((board[0][1] == board[1][1]) && (board[0][1] == board[2][1]))
    {
        return true;
    }
    else if ((board[0][2] == board[1][2]) && (board[0][2] == board[2][2]))
    {
        return true;
    }
    else if ((board[0][0] == board[1][1]) && (board[0][0] == board[2][2]))
    {
        return true;
    }
    else if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2]))
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    // Variable to store the players square number
    int PlayersNumber;
    // Variable which allows us to determine whos turn it is to play and to check for draw
    int Count = 1;
    //Variable to store X or O depending on a player's turn
    char symbol;

    while (true)
    {
        //This condition allows us to determine whether all 9 turns occurred without a player winning and output a Draw
        if (Count == 10)
        {
            cout << "DRAW" << endl;
            return 0;
        }
        //The following condition determines who's turn it is depending on the count
        //Since we started the Count with 1 and Player X is starting then the Count when Player O is playing
        //Will always have a Count that is divisible by two (even) while Count for player X will always be odd
        else if (Count % 2 != 0)
        {
            cout << "Player X: which square number (1-9)? " << endl;
            cin >> PlayersNumber;
            symbol = 'X';
        }
        else
        {
            cout << "Player O: which square number (1-9)? " << endl;
            cin >> PlayersNumber;
            symbol = 'O';
        }
        //Condition checks whether the number entered by user is only between 1 to 9
        if (PlayersNumber < 1 || PlayersNumber>9)
        {
            // Condition further checks whether the number is negative and determine whether to terminate the program
            if (PlayersNumber < 0)
            {
                cout << "GAME ENDED BY USER!" << endl;
                return 0;
            }
            else
            {
                cout << "Invalid square selected, please try again." << endl;
                continue;
            }

        }
        // Checks whether the square is already filled or not and prompts the player to enter a new number
        else if (checkBoard(PlayersNumber) == false)
        {
            cout << "Square already chosen, please try again." << endl;
            continue;
        }
        //This determines the i and j values for the board depending on a players chosen number (1-9)
        squarenumber(PlayersNumber);
        //Updates the board with the symbol X or O depending on whose turn it is
        board[i][j] = symbol;
        //Checks if the board has any 3 consecutive squares and determines who wins depending on whose turn it was
        if (checkWin() == true)
        {
            if (Count % 2 != 0)
            {
                cout << "PLAYER X WINS!\n";
            }
            else
            {
                cout << "PLAYER O WINS!\n";
            }
            break;
        }
        //This increments count to ensure the number of turns is recorded
        Count++;
    }
    return 0;
}
