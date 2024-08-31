// Tic-Tac-ToeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <cstdlib>

using namespace std;


void game();
void check1();
void check2();
void keepPlaying();

int p1 = 0;
int p2 = 0;
char again;

const int cols = 3;
const int rows = 3;
char board[cols][rows] =
{
    { '*','*','*' },
    { '*','*','*' },
    { '*','*','*' }
};

int main()
{
    for (int n = 0; n < rows; n++)
    {
        cout << endl;
        cout << " ---------------------" << endl;
        cout << "\n  |";
        for (int p = 0; p < cols; p++)
            cout << setw(3) << board[n][p] << "  |";

    }
    cout << "\n\n ---------------------" << endl;
    cout << endl;

    game();

    return 0;
}

void game()
{
    int r = 0;
    int rowPicked;
    int colPicked;
    int rown;
    int colp;

    do
    {
        //player 1's turn
        do
        {
            cout << "\nPlayer 1, pick a row (1, 2, or 3): ";
            cin >> rowPicked;

            cout << "Player 1, pick a column (1, 2 or 3): ";
            cin >> colPicked;

            rown = rowPicked - 1;
            colp = colPicked - 1;

            if (r != 0 && board[rown][colp] != '*')
            {
                cout << "This position has already been taken." << endl;
                cout << "Please pick a different position." << endl;
            }

        } while (r != 0 && board[rown][colp] != '*');

        board[rown][colp] = { 'X' };

        for (int n = 0; n < rows; n++)
        {
            cout << endl;
            cout << " ---------------------" << endl;
            cout << "\n  |";
            for (int p = 0; p < cols; p++)
                cout << setw(3) << board[n][p] << "  |";

        }
        cout << "\n\n ---------------------" << endl;
        cout << endl;

        r++;
        check1();

        if (r == 9)
        {
            keepPlaying();
        }

        //player 2's turn
        do
        {
            cout << "\nPlayer 2, pick a row (1, 2, or 3): ";
            cin >> rowPicked;

            cout << "Player 2, pick a column (1, 2 or 3): ";
            cin >> colPicked;

            rown = rowPicked - 1;
            colp = colPicked - 1;

            if (r != 0 && board[rown][colp] != '*')
            {
                cout << "This position has already been taken." << endl;
                cout << "Please pick a different position." << endl;
            }

        } while (r != 0 && board[rown][colp] != '*');

        board[rown][colp] = { 'O' };

        for (int n = 0; n < rows; n++)
        {
            cout << endl;
            cout << " ---------------------" << endl;
            cout << "\n  |";
            for (int p = 0; p < cols; p++)
                cout << setw(3) << board[n][p] << "  |";

        }
        cout << "\n\n ---------------------" << endl;
        cout << endl;

        r++;
        check2();

    } while (r < 9);
    
}

void check1()
{
    if ((board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') ||
        (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') ||
        (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') ||
        (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') ||
        (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') ||
        (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') ||
        (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') ||
        (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'))
    {
        cout << "\nPlayer 1 wins!" << endl;
        p1++;

        cout << "\nPlayer 1: " << p1 << endl;
        cout << "Player 2: " << p2 << endl;

        keepPlaying();
    }
}

void check2()
{
    if ((board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') ||
        (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') ||
        (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') ||
        (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') ||
        (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') ||
        (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') ||
        (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') ||
        (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'))
    {
        cout << "\nPlayer 2 wins!" << endl;
        p2++;

        cout << "\nPlayer 1: " << p1 << endl;
        cout << "Player 2: " << p2 << endl;

        keepPlaying();
    }
}

void keepPlaying()
{
    cout << "Would you like to keep playing? (y/n): ";
    cin >> again;

    if (again == 'y')
    {
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                board[i][j] = '*';
            }
        }

        system("cls");
        main();
    }
    else
    {
        cout << "\nGame has ended." << endl;
        exit(0);
    }
}