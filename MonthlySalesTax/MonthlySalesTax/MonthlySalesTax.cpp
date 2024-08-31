// MonthlySalesTax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Explains purpose to the user
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "This company must file a monthly sales tax report listing the sales" << endl;
    cout << "from the month and the amount of sales tax collected." << endl;
    cout << "Please input data when asked to find the monthly sales tax.  Thanks." << endl;
    cout << "-------------------------------------------------------------------------------" << endl;

    //Initializes variables
    string month = "January";
    int year = 2000;
    double totalSales = 111111.11;
    
    //Has the user input month
    cout << "\nPlease enter the month of sales: ";
    cin >> month;

    //Has the user input year
    cout << "Please enter the year of the sales: ";
    cin >> year;

    //Has the user input total register sales collected
    cout << "Please enter the total register sales collected: ";
    cin >> totalSales;

    //Formulas for taxes
    double sales = totalSales / 1.06;
    double countyTax = sales * .02;
    double stateTax = sales * .04;
    double total = countyTax + stateTax;

    //Header for calculations
    cout << "\nFor " << month << ", " << year << endl;
    cout << "-----------------------------------------" << endl;
    
    //Results
    cout << setw(20) << left << "Total Collected " << setw(4) << "$" << setw(10) << right << setprecision(2) << fixed << totalSales << endl;
    cout << setw(20) << left << "Sales " << setw(4) << "$" << setw(10) << right << setprecision(2) << fixed << sales << endl;
    cout << setw(20) << left << "County Sales Tax " << setw(4) << "$" << setw(10) << right << setprecision(2) << fixed << countyTax << endl;
    cout << setw(20) << left << "State Sales Tax " << setw(4) << "$" << setw(10) << right << setprecision(2) << fixed << stateTax << endl;
    cout << setw(20) << left << "Total Sales Tax " << setw(4) << "$" << setw(10) << right << setprecision(2) << fixed << total << endl;
    

    return 0;
}

