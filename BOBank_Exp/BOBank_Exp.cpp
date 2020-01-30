// BOBank_Exp.cpp : Version 03a
// Incorporates conditional statements

#include <iostream>
#include <string>
using namespace std;

int numberPlayers, startCash;
string Player1, Player2, Player3, Player4, Player5, Player6;
int turnMinutes, turnSeconds;
const double secondsPerMinute = 60;
double turnTime;


int main()
{
    cout << "Welcome to the B&O Banker Program\n";
    cout << "Enter the number of players: ";
    cin >> numberPlayers;
    if (numberPlayers <= 6 && numberPlayers > 2)
    {
        startCash = 1500 / numberPlayers;
        cout << "Each player will start with $" << startCash << " in cash. \n";
       
        cout << "Enter player 1 name: ";
        cin >> Player1;
        cout << "Enter player 2 name: ";
        cin >> Player2;
        cout << "Enter player 3 name: ";
        cin >> Player3;
        if (numberPlayers > 3)
        {
            cout << "Enter player 4 name: ";
            cin >> Player4;
            if (numberPlayers > 4)
            {
                cout << "Enter player 5 name: ";
                cin >> Player5;
                if (numberPlayers > 5)
                {
                    cout << "Enter player 6 name: ";
                    cin >> Player6;
                }
            }
        }
        cout << "These are the players:\n";
        cout << " 1: " << Player1 << endl;
        cout << " 2: " << Player2 << endl;
        cout << " 3: " << Player3 << endl;
        cout << " 4: " << Player4 << endl;
        cout << " 5: " << Player5 << endl;
        cout << " 6: " << Player6 << endl;

        cout << "Enter the maximum time per term in minute and seconds: ";
        cin >> turnMinutes >> turnSeconds;
        turnTime = turnMinutes + turnSeconds / secondsPerMinute;
        cout << "Turn time is " << turnMinutes << " minutes and " << turnSeconds << " seconds or " << turnTime << " minutes.\n";
    }
    else
    {
        cout << "Sorry, number of players needs to be 3 to 6\n";
    }
    return 0;
}