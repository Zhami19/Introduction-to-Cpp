// FreezingAndBoilingPoints.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    char Again; //Will determine if program will loop

    do
    {
        //Explanation of program
        cout << "This program compares the temperature in farenheit that the user enters," << endl;
        cout << "compares it with the following table, and shows all the substances that will" << endl;
        cout << "freeze and boil at that temperature." << endl;

        //Initializing the temperature variable
        double temperature;

        //User will input value for temperature
        cout << "\nPlease enter the current temperature in Farenheit: ";
        cin >> temperature;

        //Temperature table
        cout << left << setw(30) << "SUBSTANCE" << left << setw(30) << "FREEZING POINT <F>" << left << setw(30) << "BOILING POINT <F>" << endl;
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << left << setw(30) << "Ethyl Alcohol" << left << setw(30) << "- 173 Degrees" << left << setw(30) << "172 Degrees" << endl;
        cout << left << setw(30) << "Mercury" << left << setw(30) << "- 38 Degrees" << left << setw(30) << "676 Degrees" << endl;
        cout << left << setw(30) << "Oxygen" << left << setw(30) << "- 362 Degrees" << left << setw(30) << "- 306 Degrees" << endl;
        cout << left << setw(30) << "Water" << left << setw(30) << "32 Degrees" << left << setw(30) << "212 Degrees" << endl;
        
        //Initializing substances' states varibales
        string ethylAlcoholResult;
        string mercuryResult;
        string oxygenResult;
        string waterResult;

        string ethylAlcoholState;
        string mercuryState;
        string oxygenState;
        string waterState;

        //Temperature rules for Ethyl Alcohol
        if (temperature <= -173)
        {
            ethylAlcoholResult = "Freezes!";
            ethylAlcoholState = "freeze!";
        }
        else if (temperature > -173 && temperature < 172)
        {
            ethylAlcoholResult = "No Change!";
            ethylAlcoholState = "not change!";
        }
        else
        {
            ethylAlcoholResult = "Boils!";
            ethylAlcoholState = "boil!";
        }

        //Temperature rules for Mercury
        if (temperature <= -38)
        {
            mercuryResult = "Freezes!";
            mercuryState = "freeze!";
        }
        else if (temperature > -38 && temperature < 676)
        {
            mercuryResult = "No Change!";
            mercuryState = "not change!";
        }
        else
        {
            mercuryResult = "Boils!";
            mercuryState = "boil!";
        }

        //Temperature rules for Oxygen
        if (temperature <= -362)
        {
            oxygenResult = "Freezes!";
            oxygenState = "freeze!";
        }
        else if (temperature > -362 && temperature < -306)
        {
            oxygenResult = "No Change!";
            oxygenState = "not change!";
        }
        else
        {
            oxygenResult = "Boils!";
            oxygenState = "boil!";
        }

        //Temperature rules for Water 
        if (temperature <= 32)
        {
            waterResult = "Freezes!";
            waterState = "freeze!";
        }
        else if (temperature > 32 && temperature < 212)
        {
            waterResult = "No Change!";
            waterState = "not change!";
        }
        else
        {
            waterResult = "Boils!";
            waterState = "boil!";
        }

        //Results
        cout << "\nWhen the temperature is " << temperature << " Degrees" << endl;

        cout << left << setw(20) << "\nEthynyl Alcohol" << left << setw(20) << ethylAlcoholResult << endl;
        cout << left << setw(20) << "\nMercury" << left << setw(20) << mercuryResult << endl;
        cout << left << setw(20) << "\nOxygen" << left << setw(20) << oxygenResult << endl;
        cout << left << setw(20) << "\nWater" << left << setw(20) << waterResult << endl;

        //Summary of results
        cout << "\nSUMMARY:" << endl;
        cout << "At this temperature, Ethyl Alcohol will " << ethylAlcoholState << endl;
        cout << "At this temperature, Mercury will " << mercuryState << endl;
        cout << "At this temperature, Oxygen will " << oxygenState << endl;
        cout << "At this temperature, Water will " << waterState << endl;

        //Asking the user if they want to repeat the program
        cout << "\nWould you like to test another temperature? (Enter y for yes and n for no): ";
        cin >> Again;

        if (Again == 'y')
            cout << "\n" << endl;
        else if (Again == 'n')
            cout << "Program will end now." << endl;
        else
            cout << "Invalid input.  Program will end now." << endl;

    } while (Again == 'y'); //Will loop program if user inputs 'y'

    return 0;
}
