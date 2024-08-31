// FatGramCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char Again; //This char will determine if program will loop

    do
    {
        //Explanation of program
        cout << "CALORIES VS CALORIES FROM FAT" << endl;
        cout << "**************************************************" << endl;
        cout << "Calories provide a measure of how much" << endl;
        cout << "energy you get from a serving of this food." << endl;
        cout << "Many Americans consume more calories than" << endl;
        cout << "they need without meeting recommended intakes" << endl;
        cout << "for a number of nutrients. One gram of fat has" << endl;
        cout << "9 calories.  Foods with less than 30% calories" << endl;
        cout << "are considered low in fat." << endl;

        cout << "\nThis program will calculate the percentage of fat" << endl;
        cout << "in a food based on your input of total calories" << endl;
        cout << "and fat in grams." << endl;
        cout << "**************************************************" << endl;

        //Initializing variables (total calories and grams of fat)
        double totalCalories;
        double gramsFat;

        //Asking user for input of total calories and grams of fat
        cout << "\nPlease enter the total calories present in your food: ";
        cin >> totalCalories;

        cout << "\nPlease enter the grams of fat present in your food: ";
        cin >> gramsFat;

        /*Equations to calculate calories from fat and
        its percentage from the total calories*/
        double caloriesFromFat = gramsFat * 9;
        double percentage = caloriesFromFat / totalCalories * 100;

       
        if (totalCalories < 0 || gramsFat < 0 || caloriesFromFat > totalCalories) //Invalid input messages
        {
            cout << "\nInvalid input.  Remember that the number of total" << endl;
            cout << "calories and grams of fat cannot be less than 0." << endl;
            cout << "This error could also be due to the number of calories" << endl;
            cout << "from fat turning out to be greater than the total calories." << endl;
            cout << "Either the calories or fat grams were incorrectly entered." << endl;
        }
        else //Results message
        {
            if (percentage > 30) 
            {
                cout << "\nWith " << gramsFat << " grams of fat with " << totalCalories << " total calories." << endl;
                cout << percentage << "% of the calories come from fat." << endl;
            }
            else
            {
                cout << "\nWith " << gramsFat << " grams of fat with " << totalCalories << " total calories." << endl;
                cout << percentage << "% of the calories come from fat." << endl;
                cout << "\nThis food is low in fat." << endl;
            }
        } 

        //Asking user if they want to repeat program
        cout << "\nDo you want to run the program again? (Enter y for yes and n for no): ";
        cin >> Again;
        if (Again == 'y')
            cout << "\n" << endl;
        else if (Again == 'n')
            cout << "\nProgram will end now." << endl;
        else
            cout << "\nInvalid input. Program will end now." << endl;
    } while (Again == 'y'); //Loops program if user inputs 'y'

    return 0;
}