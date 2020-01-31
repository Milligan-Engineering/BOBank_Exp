//File Name: BOBank_Exp.cpp
//Author: JJ Giesey
//Email Address: jjgiesey@milligan.edu
//Term Project
//Description: This program handles banking duties in the B&O Board Game. Class example version
//Version 3b: Incorporates good programming practices
//Last Changed: 02/04/2019


#include <iostream>
#include <string>
using namespace std;

int numberPlayers, startCash;
string Player1, Player2, Player3, Player4, Player5, Player6;
int turnMinutes, turnSeconds;
const int MIN_PLAYERS = 3;
const int MAX_PLAYERS = 6;
// const double secondsPerMinute = 60.0 Replaced constant with value 60.0
double turnTime;

int main()
{
    cout << "Welcome to the B&O Banker Program\n";
    cout << "Enter the number of players: ";
    cin >> numberPlayers;
    while ((numberPlayers > MAX_PLAYERS) || (numberPlayers < MIN_PLAYERS))
    {
        cout << "Sorry, number of players needs to be " << MIN_PLAYERS << " to " << MAX_PLAYERS << ".\n";
        cout << "Enter the number of players: ";
        cin >> numberPlayers;
    }
    startCash = 1500 / numberPlayers; //Calculates starting cash based on number of players
    cout << "Each player will start with $" << startCash << " in cash. \n";
    
    // Ask for the player names based on the number of players specified
    cout << "Enter player 1 name: ";
    cin >> Player1;
    /*While these nested if statments will work find they are kind of cumbersome and not 
    too clear as to their function. When we implement arrays this will be much cleaner
    with a while statement.*/
    if (numberPlayers > 1)
    {
        cout << "Enter player 2 name: ";
        cin >> Player2;
        if (numberPlayers > 2)
        {
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
        }
    }
    cout << "These are the players:\n";
    cout << " 1: " << Player1 << endl;
    cout << " 2: " << Player2 << endl;
    cout << " 3: " << Player3 << endl;
    cout << " 4: " << Player4 << endl;
    cout << " 5: " << Player5 << endl;
    cout << " 6: " << Player6 << endl;

    cout << "Enter the maximum time per term minutes: ";
    cin >> turnMinutes;
    cout << "Enter the maximum time per term seconds: ";
    cin >> turnSeconds;
    turnTime = turnMinutes + turnSeconds / 60.0;
    cout << "Turn time is " << turnMinutes << " minutes and " << turnSeconds << " seconds or " << turnTime << " minutes.\n";
 
    return 0;
}