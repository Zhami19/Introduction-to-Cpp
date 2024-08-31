// StockCommissions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Kathryn bought 200 shares of stock at a price of $21.77 per share." << endl;
    cout << "She must pay her stock broker a 2 percent commission for the transaction." << endl;
    cout << "This is how much she should expect to pay..." << endl;

    cout << "\n---------------------------------------------" << endl;
    cout << "200 shares at $ 21.77 per share" << endl;
    cout << "---------------------------------------------" << endl;

    cout << "\nTotal Stock Price: $ 4354.00" << endl;
    cout << "Broker Commission: $ 87.08" << endl;
    cout << "Gross Total: $ 4441.08" << endl;

    cout << "\nAnswer the following questions to run your own stock commission analysis..." << endl;


    double shareNum = 200.00;
    double sharePrice = 21.77;
    double percent = 2.00;

    cout << "\nHow many shares will you be buying? ";
    cin >> shareNum;

    cout << "\nWhat is the price per share?   $ ";
    cin >> sharePrice;

    cout << "\nWhat percentage will your broker be paid? ";
    cin >> percent;

    cout << "\n---------------------------------------------" << endl;
    cout << shareNum << " shares at $ " << sharePrice << " per share" << endl;
    cout << "---------------------------------------------" << endl;

    double decimalPercent = percent * .01;
    double stockCost = shareNum * sharePrice;
    double brokerCommission = stockCost * decimalPercent;
    double grossTotal = stockCost + brokerCommission;

    cout << "\nStock Cost: $ " << stockCost << endl;
    cout << "Broker Fee: $ " << brokerCommission << endl;
    cout << "Total Cost: $ " << grossTotal << endl;

    cout << "\nHave a nice day!" << endl;

    return 0;
}
