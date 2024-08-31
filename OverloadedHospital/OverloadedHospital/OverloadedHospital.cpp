// OverloadedHospital.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iomanip>
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

char Again; //Will determine if program will loop
string patientName; //Patient name is a string type

//Function for an in-patient
double patientFormula(int days, double hospitalCharge, double medication, double services)
{
    double total = days * hospitalCharge + medication + services; //formula for total

    cout << "\nThe total charges for " << patientName << " are: $ " << total << endl;

    return 0;
}

//Function for an out-patient
double patientFormula(double services, double medication)
{
    double total = medication + services; //formula for total

    cout << "\nThe total charges for " << patientName << " are: $ " << total << endl;

    return 0;
} 

//Main function
int main()
{
    //Explanation of program
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "             Welcome to The Woodlands Hospital" << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

    cout << "Please read through the following prompts" << endl;
    cout << "to determine patient's info." << endl;

    do //Loops this section depending on user input later on
    {
        //Initialization of varibales
        double days;
        double hospitalCharge;
        double medication;
        double services;
        int selection;

        //Prompts the user to enter patient's name
        cout << "\nPlease enter the patient's name: ";
        getline(cin, patientName);

        //Prompts the user to make a selection
        cout << "\nPlease make a selection..." << endl;
        cout << "\n1: Inpatient Bill" << endl;
        cout << "2: Outpatient Bill" << endl;
        cout << "3: Exit Application" << endl;

        cout << "\nSelection: ";
        cin >> selection;

        //Output for selection 1
        if (selection == 1)
        {
            //In-patient questions and results
            do 
            {
                cout << "\nEnter the number of days the patient" << endl;
                cout << patientName << " stayed in the hospital" << setw(5) << left << " : ";
                cin >> days;

                cout << setw(35) << left << "\nEnter the daily hospital charge" << setw(5) << left << " : $ ";
                cin >> hospitalCharge;

                cout << setw(35) << left << "\nEnter the medication expenses" << setw(5) << left << " : $ ";
                cin >> medication;

                cout << setw(35) << left << "\nEnter the charges for services" << setw(5) << left << " : $ ";
                cin >> services;

                if (days < 0 || hospitalCharge < 0 || medication < 0 || services < 0) //Input validation
                {
                    cout << "All responses must have a value of 0 or greater." << endl;
                    cout << "Please reconsider your responses." << endl;
                }

                else
                    patientFormula(days, hospitalCharge, medication, services); //Calls in-patient function
            } while (days < 0 || hospitalCharge < 0 || medication < 0 || services < 0); //Loops as long as user input is invalid
        }

        //Output for selection 2
        else if (selection == 2)
        {
            //Out-patient questions and results
            do 
            {
                cout << setw(32) << left << "\nEnter the charges for services" << setw(5) << left << " : $ ";
                cin >> services;

                cout << setw(32) << left << "\nEnter the medication expenses" << setw(5) << left << " : $ ";
                cin >> medication;

                if (medication < 0 || services < 0) //Input validation
                {
                    cout << "All responses must have a value of 0 or greater." << endl;
                    cout << "Please reconsider your responses." << endl;
                }

                else
                    patientFormula(services, medication); //Calls out-patient function
            } while (medication < 0 || services < 0); //Loops as long as user input is invalid
        }

        //Output for selection 3
        else if (selection == 3)
            exit(0); //Program will exit
        else
        {
            cout << "Invalid input. Program ending now." << endl; //Program will exit if input is invalid
            exit(0);
        }

        //Asks the user if they want to repeat the program
        cout << "\nWould you like to create another Hospital Bill" << endl;
        cout << "for another patient? (y/n): ";
        cin >> Again;

        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Clears input buffer

        //Looping the program
        if (Again == 'y')
        {
            system("cls"); //clears the screen
        }
        else if (Again == 'n')
            cout << "Program ending now." << endl;
        else
            cout << "Invalid input. Program ending now." << endl;

    } while (Again == 'y'); //Will loop program if user inputs 'y'
  

    return 0;
}

