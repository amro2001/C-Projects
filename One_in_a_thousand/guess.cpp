//Guessing a number between 1 to 1000 in only 10 questions
#include<iostream>
#include<cmath>

using namespace std;
char response; // Variable to store (y/n) responses to determine new start and end ranges
double StartRange, EndRange, Mid; // Variables to store the begginning and end of the range and to calculate the middle of the range

int main(int argc, char** argv) //Has a parameter so an argument can be passed from the command line with the number being guessed
{
    StartRange = 1;
    EndRange = 1000;
    if (atoi(argv[1]) > 1000 || atoi(argv[1]) < 1)// checks whether the argument passed/ number guessed is within the range of 1 to 1000
    {
        cout << "Invalid Number!" << endl;
        return 0;
    }

    for (int i = 0; i < 10; i++)// loops 10 times as only 10 questions can be asked
    {
        Mid=round(((StartRange+EndRange)/2));// calculates the new middle of the range everytime it loops
        cout<<"is your number < "<<Mid<<endl;
        if (atoi(argv[1]) < Mid) //this condition allows the code to answer for itself to check whether the guess is less than the midpoint
        {
            response = 'y';
        }
        else
        {
            response = 'n';
        }
        if (response=='y')// this condition assigns the midpoint to the new endpoint or the new startpoint
        {
            EndRange=Mid;// obviously if the guess is less than the midpoint, then the midpoint should be the new endpoint and vice versa for startpoint
        }
        else
        {
            StartRange= Mid;
        }

    }
    if (response == 'y')// checks the last response to see whether to ouput the number less than the midpoint or the midpoint itself
    {
        cout << "Your number is " << StartRange << "!" << endl;
    }
    else
    {
        cout << "Your number is " << Mid << "!" << endl;
    }
    return 0;

}
