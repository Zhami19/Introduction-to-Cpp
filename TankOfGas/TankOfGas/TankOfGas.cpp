// TankOfGas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Project: calculating miles (in town and on highway) based on gas tank capacity.
int main()
{
    double tankSize = 20.0; //number of gallons the tank holds
    double townAmount = 21.5; //number of miles in town
    double highwayAmount = 26.8; //number of miles on the highway

    //sample for the user to understand the purpose of program
    cout << "My car has a 20 gallon tank of gas and gets 21.5 miles ";
    cout << "per gallon in town" << endl;
    cout << "and 26.8 miles per gallon on the highway." << endl;
    cout << "This means that my car can drive a total of: " << endl;
    cout << "430 miles in town and 536 miles on the highway." << endl;

    cout << "\nAnswer the following questions about your own car in order to run a similar analysis." << endl;


    cout << "\nHow many gallons of gas does your car hold?   "; //question for the user about tank capacity
    cin >> tankSize; //user inputs their car's tank size

    cout << "\nHow many miles to the gallon do you get in town?   "; //question for the user about miles in town
    cin >> townAmount; //user inputs miles in town

    cout << "\nHow many miles to the gallon do you get on the highway?   "; //question for the user about miles on highway
    cin >> highwayAmount; //user inputs miles on highway

    double townCalc = townAmount * tankSize; //calculation for distance in town
    double highwayCalc = highwayAmount * tankSize; //calculation for distance on highway

    //User's results
    cout << "\nYou car with a " << tankSize << " gallon tank can drive:" << endl;
    cout << townCalc << " miles in town." << endl;
    cout << highwayCalc << " miles on the highway." << endl;

    cout << "\nHave a nice day!" << endl;

    return 0;
}


