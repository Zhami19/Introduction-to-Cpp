// Rock-Paper-ScissorsGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iomanip>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int choice; //Will determine if user picked rock,paper, or scissors
int y; //Computer's random number
int computer = 0; //Computer's initial score
int user = 0; //User's initial score

double game(); //Prototype for the game's function
int score(); //Prototype for the score function
void repeat(); //Prototype for the repeat function



int main()
{
    //Explanation of program/game
    cout << "This program lets the user play the game of Rock, Paper, Scissors against the" << endl;
    cout << "computer. Rock beats scissors, paper beats rock, and scissors beats paper. This" << endl;
    cout << "game can also be played repeatedly and tracks the number of wins and losses." << endl;

    char play; //Will determine if user plays or not
    cout << "\nWould you like to play? (y/n): ";
    cin >> play;

 
    if (play == 'y') //User wants to play
    {
        game(); //Calls the game function
    }
    else if (play == 'n') //User does not want to play
    {
        exit(0); //Exits program
    }
    else
    {
        cout << "Invalid input. Program will end now." << endl; //Input validation
        exit(0); //Exits program
    }

    return 0;
}




//Rock, paper, scissors game
double game()
{
    int n = 0; //Number of rounds

    do //Will do rounds of the game
    {
        //Randomness initializations and formula for computer's choice
        const int MIN_VALUE = 1;
        const int MAX_VALUE = 3;

        unsigned seed = time(0);
        srand(seed);

        y = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE; //Randomn value for y, the computer's choice

        //Prompts user to choose an attack
        cout << "\nRock, Paper, Scissors" << endl;
        cout << "---------------------" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;

        cout << "\nEnter your choice (1/2/3): ";
        cin >> choice; //Gets user's choice

        //Display what computer chose
        if (y == 1)
            cout << "Computer chose Rock.\n" << endl;
        else if (y == 2)
            cout << "Computer chose Paper.\n" << endl;
        else
            cout << "Computer chose Scissors.\n" << endl;

        score(); //Calls the score function, which displays results

        n++; //Adds a round played

    } while (n < 3); //At least 3 rounds will be played

    repeat(); //Calls the repeat function, which determines if user will continue playing

    return 0;
}



//Keeps track of scores
int score()
{
    //Winner determinants
    if (y == 1 && choice == 3)
    {
        cout << "Computer wins!" << endl;
        computer++;
    }
    else if (y == 2 && choice == 1)
    {
        cout << "Computer wins!" << endl;
        computer++;
    }
    else if (y == 3 && choice == 2)
    {
        cout << "Computer wins!" << endl;
        computer++;
    }
    else if (choice == 1 && y == 3)
    {
        cout << "User wins!" << endl;
        user++;
    }
    else if (choice == 2 && y == 1)
    {
        cout << "User wins!" << endl;
        user++;
    }
    else if (choice == 3 && y == 2)
    {
        cout << "User wins!" << endl;
        user++;
    }
    else
        cout << "Tie game!" << endl;

    //Displays results
    cout << left << setw(12) << "User: " << left << user << " wins." << endl;
    cout << left << setw(12) << "Computer: " << left << computer << " wins." << endl;

    return 0;
}



//Asks the user if they want to keep playing
void repeat()
{
    char again; //Will determine if user continues playing
    cout << "\nContinue playing? (y/n): ";
    cin >> again;

    if (again == 'y') //User wants to continue playing
    {
        system("cls"); //Clears screen
        game(); //Calls the game function to continue playing
    }
    else if (again == 'n') //User wants to stop playing
    {
        cout << "Game has ended." << endl;
        exit(0); //Exits program
    }
    else
    {
        cout << "Invalid input. Game ending now." << endl; //Input validation
        exit(0); //Exits program
    }
}