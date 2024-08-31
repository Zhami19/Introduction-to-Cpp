// HotelOccupancy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    char Again; //Will determine if program will loop or not
    do
    {
        //Explanation of program
        cout << "-------------------------------------------------------------------" << endl;
        cout << "This program calculates the occupancy rate of The Woodlands Hotel." << endl;
        cout << "Please answer the following questions." << endl;
        cout << "-------------------------------------------------------------------" << endl;

        //Initialization of variables
        int numFloors;
        float numRooms = 0;
        float numOccupied = 0;
        int base1; //User's input; will be added to determine total number of rooms in hotel
        int base2; //User's input; will be added to determine total number of rooms occupied in hotel

        //Asks user number of floors in hotel
        do
        {
            cout << "\nHow many floors are in this hotel?: "; 
            cin >> numFloors;

            if (numFloors < 1) //Input validation 
            {
                cout << "\nHotel must have at least one floor." << endl;
                cout << "Please reconsider your answer." << endl;
            }
        } while (numFloors < 1);

        //Asks user number of rooms and occupied rooms in hotel
        for (int n = 1; n <= numFloors; n++) 
        {
            if (n == 13) //Skips floor 13
                continue;

            cout << "\nEnter the number of rooms on floor " << n << ": ";
            cin >> base1;
            cout << "How many rooms are occupied in this floor? ";
            cin >> base2;

            //Input validation
            if (base1 < 10 || base2 > base1)
            {
                cout << "\nFloors must have at least ten rooms." << endl;
                cout << "Number of rooms occupied must be less than the number of rooms in this floor." << endl;
                cout << "Please reconsider your answers." << endl;

                n--; //Makes sure the next question is about the same floor if input was previously invalid
            }
            else
            {
                numRooms += base1; //Keeps running total of number of rooms
                numOccupied += base2; //Keeps running total of number of rooms occupied
            }
        }

        //Formulas
        int totalAvailable = numRooms - numOccupied;
        double occupancyRate = numOccupied / numRooms * 100;

        //Results
        cout << "----------------------------------" << endl;
        cout << "\nHotel's Occupancy Room Summary:" << endl;
        cout << "----------------------------------" << endl;

        cout << setw(30) << left << "\nTotal rooms in this hotel" << setw(5) << left << ":" << setw(5) << left << numRooms << endl;

        cout << setw(30) << left << "\nTotal rooms occupied" << setw(5) << left << ":" << setw(5) << left << numOccupied << endl;

        cout << setw(30) << left << "\nTotal rooms available" << setw(5) << left << ":" << setw(5) << left << totalAvailable << endl;

        cout << setw(30) << left << "\nHotel Occupancy Rate" << setw(5) << left << ":" << setw(5) << left << setprecision(4) << occupancyRate << "%" << endl;

        //Asks user if they want to repeat the program
        cout << "\nWould you like to run the program again? (Enter y for yes and n for no): ";
        cin >> Again;

        if (Again == 'y')
            cout << "\n" << endl;
        else if (Again == 'n')
            cout << "Program will end now." << endl;
        else
            cout << "Invalid input.  Program will end now." << endl;

    } while (Again == 'y'); //Loops program if user input is 'y'

    return 0;
}
