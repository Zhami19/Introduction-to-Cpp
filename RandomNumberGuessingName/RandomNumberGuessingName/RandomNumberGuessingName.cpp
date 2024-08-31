// RandomNumberGuessingName.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <conio.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    //Explanation of program
    cout << "This program generates a random number" << endl;
    cout << "between 1 and 100 and then prompts the" << endl;
    cout << "user to guess the number. The program" << endl;
    cout << "counts the number of guesses until the" << endl;
    cout << "user enters the correct number." << endl;

    char Again; //Will determine if program loops

    do
    {
        for (int n = 1; ; n++) //Keeps track of game number
        {
            cout << "\nGAME # " << n << endl;
            cout << "==================================================" << endl;

            const int MIN_VALUE = 1;
            const int MAX_VALUE = 100;
            int y = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE; //Random number generator

            double guess; //User's guess variable

            //User guesses number
            for (int g = 1; ; g++) //Keeps track of number of guesses
            {
                cout << "\nPlease guess a number from 1 to 100: ";
                cin >> guess;

                if (guess > y)
                    cout << "Your number is too high, try again." << endl;
                else if (guess < y)
                    cout << "Your number is too low, try again." << endl;
                else
                {
                    cout << "\nCORRECT, the number is " << y << " !!!" << endl;
                    cout << "You guessed the number in " << g << " tries." << endl;
                    break;
                }

            }

            //Asks user if they want to play again
            cout << "\nDo you wish to play again? (Enter y for yes or n for no): "; 
            cin >> Again;

            if (Again == 'y')
            {
                system("cls"); //Clears the screen for the next game
            }
            else if (Again == 'n')
            {
                cout << "Program ending now." << endl;
                break;
            }
            else
            {
                cout << "Invalid input. Program ending now." << endl;
                break;
            }
        }


    } while (Again == 'y'); //Program will loop if user enters 'y'

    return 0;
}
