//File Name: BOBank_Exp.cpp
//Author: JJ Giesey
//Email Address: jjgiesey@milligan.edu
//Term Project
//Description: This program handles banking duties in the B&O Board Game. Class example version
//Version 3c: Incorporates Arrays
//Last Changed: 02/05/2019

#include <iostream>
#include <string>
using namespace std;

const int MIN_PLAYERS = 3;
const int MAX_PLAYERS = 6;
int numberPlayers, startCash;
string playerName[MAX_PLAYERS];
int playerCash[MAX_PLAYERS];
int turnMinutes, turnSeconds;
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

    // Enter player names
    int i=0; // Going to use "i" as a counter, exception to declaring before main
    while (i < numberPlayers)
    {
        cout << "Enter player " << i+1 << " name: ";
        cin >> playerName[i];
        i++;
    }
    cout << "These are the players:\n";
    int k = 0;
    while (k < numberPlayers)
    {
        cout << k + 1 << ": " << playerName[k] << endl;
        k++;
    }
   
    startCash = 1500 / numberPlayers; //Calculates starting cash based on number of players
    cout << "Each player will start with $" << startCash << " in cash. \n";
    // Initialize player cash
    int c = 0;
    while (c < numberPlayers)
    {
        playerCash[c] = startCash;
        cout << playerName[c] << " " << "will start with" << " $ " << playerCash[c] << endl ;
        c++;
    }

    /*
    cout << "Enter the maximum time per term minutes: ";
    cin >> turnMinutes;
    cout << "Enter the maximum time per term seconds: ";
    cin >> turnSeconds;
    turnTime = turnMinutes + turnSeconds / 60.0;
    cout << "Turn time is " << turnMinutes << " minutes and " << turnSeconds << " seconds or " << turnTime << " minutes.\n";
    */

    return 0;
}