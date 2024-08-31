// GradeBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <cstdlib>

using namespace std;

string again; //will determine if the program runs again
string names[5]; //student names
double nameScore[5][4]; //student's  scores on the four tests
char studentLetterGrade[5]; //students'letter grades

double averagesResults(); //averageResults function prototype
void repeat(); //repeat function prototype
int program(); //program function prototype

int main()
{
    //explanation of program
    cout << "This program allows the user to enter five student" << endl;
    cout << "names and their scores on four different tests." << endl;
    cout << "It will then calculate each student's average" << endl;
    cout << "and letter grade based on the following table...\n" << endl;

    //letter grade table
    cout << "----------------------------------------------------" << endl;
    cout << setw(20) << left << "Test Score" << setw(20) << left << "Letter Grade\n" << endl;

    cout << setw(20) << left << "90-100" << setw(20) << left << "A\n" << endl;

    cout << setw(20) << left << "80-89" << setw(20) << left << "B\n" << endl;

    cout << setw(20) << left << "70-79" << setw(20) << left << "C\n" << endl;

    cout << setw(20) << left << "60-69" << setw(20) << left << "D\n" << endl;

    cout << setw(20) << left << "0-59" << setw(20) << left << "F" << endl;
    cout << "----------------------------------------------------" << endl;

    program(); //calls the program function
}

//gets students' names and scores
int program()
{

    for (int n = 0; n < 5; n++) //will loop 5 times, each time for each student
    {
        int s = n + 1; //student number

        cout << "\nEnter the name of student " << s << ": "; //prompts user to enter student name
        getline(cin, names[n]); //gets student name

        bool invalid; //input validation determinant

        //prompts user to enter student scores; will loop depending on input validation
        do
        {
            invalid = false; //user's inputs are valid by default

            cout << "\nEnter " << names[n] << "'s scores: "; //prompts user to enter student scores on 4 tests
            cin >> nameScore[n][0];
            cin >> nameScore[n][1];
            cin >> nameScore[n][2];
            cin >> nameScore[n][3];

            //input is invalid if scores are less than 0 or greater than 100
            if (nameScore[n][0] < 0 || nameScore[n][0] > 100 || nameScore[n][1] < 0 || nameScore[n][1] > 100 || nameScore[n][2] < 0 || nameScore[n][2] > 100 || nameScore[n][3] < 0 || nameScore[n][3] > 100)
            {
                cout << "\nThe student's score cannot be less than 0" << endl;
                cout << "or greater than 100. Please reconsider your answers." << endl;
                invalid = true; //invalid is set to true
            }

        } while (invalid == true); //user will have to enter grades again if invalid 

        cin.ignore(); //ignores newline character
    }

    averagesResults(); //calls the averagesResults function

    repeat(); //calls the repeat function

    return 0;
}

//will calculate averages and assign letter grades to students
double averagesResults()
{
    double average; //average of each student

    cout << "\n----------------------------------------------------" << endl;
    cout << "Results:" << endl;

    //assigns letter graded based on average
    for (int a = 0; a < 5; a++)
    {
        average = (nameScore[a][0] + nameScore[a][1] + nameScore[a][2] + nameScore[a][3]) / 4; //calculates average

        if (average >= 90)
            studentLetterGrade[a] = 'A';
        else if (average >= 80)
            studentLetterGrade[a] = 'B';
        else if (average >= 70)
            studentLetterGrade[a] = 'C';
        else if (average >= 60)
            studentLetterGrade[a] = 'D';
        else 
            studentLetterGrade[a] = 'F';

        //displays results for each student
        cout << "\n" << names[a] << "'s average = " << average << endl;
        cout << names[a] << "'s letter grade = " << studentLetterGrade[a] << endl;
    }

    cout << "----------------------------------------------------" << endl;

    return 0;
}

//asks user if they want to repeat the program
void repeat()
{
    cout << "\nWould you like to run more student grades? (y/n): "; 
    getline(cin, again); //gets user's decision

    if (again == "y" || again == "Y" || again == "yes" || again == "YES" || again == "Yes") //user wants to calculate more grades
    {
        system("cls"); //clears screen
        program(); //calls the program function to calculate more student grades
    }
    else
    {
        cout << "Program ending now." << endl;
        exit(0); //exits program
    }
}