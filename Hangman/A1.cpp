// This is a simple hangman game
#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    char GuessLetter; // Declaration of Variables
    string HangmanWord;
    bool CheckUpper; //This variable would be used to allow us to know whether to terminate the program or not
    cin >> HangmanWord;

    for(int i=0; i<HangmanWord.length(); i++) //Used to check if every character in the word is uppercase or not
    {
        if((HangmanWord[i] < 'A') ||(HangmanWord[i] > 'Z'))
        {
            CheckUpper = false;
            break;
        }
        else
        {
            CheckUpper = true;
        }
    }
    if (CheckUpper==true)  //Decides whether to allow the user to start guessing or not based on whether their typed word is all uppercase or not
    {
        cin >> GuessLetter; //Letter guessed by user
        while (true)
        {
            if (HangmanWord.length()==0)  // Checks whether the length of the word reaches 0 to ensure the program terminates when all letters are guessed
            {
                cout << "HANGMAN!" << endl;
                break;
            }
            else if ((GuessLetter < 'A') ||(GuessLetter > 'Z'))  //Ensures all letters guessed are in uppercase as well
            {
                break;
            }
            else if (HangmanWord.find(GuessLetter) != string::npos)  //Checks whether the letter is within the word
            {
                HangmanWord.erase(remove(HangmanWord.begin(), HangmanWord.end(), GuessLetter), HangmanWord.end()); // Removes the correct letter guessed anywhere within the word
            }
            else
            {
                cin >> GuessLetter;
            }
        }

    }

    else  // Terminates the code if the word given is not fully uppercase
    {
        return 0;
    }
}
