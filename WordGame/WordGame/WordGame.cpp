// WordGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    //Introduce the game to the user
    cout << "This is a fantastic Word Game!!!" << endl;
    cout << "Please enter the information asked for and watch the fun unfold!" << endl;

    //Initialize variables
    string name;
    int age;
    string city;
    string college;
    string profession;
    string favoriteAnimal;
    string petName;

    //Questions for user
    cout << "\nWhat is your name: ";
    getline(cin, name);

    cout << "\nHow old are you: ";
    cin >> age;
    cin.ignore(); //skip the newline character
    cout << "\nName your favorite city: ";
    getline(cin, city);

    cout << "\nName a college: ";
    getline(cin, college);

    cout << "\nWhat profession do you want to be when you grow up?: ";
    getline(cin, profession);

    cout << "\nWhat is your favorite animal?: ";
    getline(cin, favoriteAnimal);

    cout << "\nWhat is your pet's name?: (current, future, or past)?: ";
    getline(cin, petName);

    //Word game
    cout << "\nThere once was a person name " << name << " who lived in " << city << "." << endl;
    cout << "At the age of " << age << ", " << name << " went to college at " << college << "." << endl;
    cout << name << " graduated and went to work as a " << profession << "." << endl;
    cout << "Then, " << name << " adopted a(an) " << favoriteAnimal << " named " << petName << "." << endl;
    cout << "They both lived happily ever after!";

    return 0;
}
