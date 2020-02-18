//File Name: BOBank_Exp.cpp
//Author: JJ Giesey
//Email Address: jjgiesey@milligan.edu
//Term Project
//Description: This program handles banking duties in the B&O Board Game. Bad Loop Version
//Version BL
//Last Changed: 02/11/2020

#include <iostream>
#include <string>
using namespace std;

const int MIN_PLAYERS = 3;
const int MAX_PLAYERS = 6;
int numberPlayers, startCash, iTemp;
string temp;
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
    // Going to use "i" as a counter, exception to declaring before main
    for (int i = 0; i < numberPlayers; i++)
    {
        cout << "Enter player " << i+1 << " name: ";
        cin >> playerName[i];
    }
    
    cout << "These are the players:\n";
    for (int i = 0; i < numberPlayers; i++)
    {
        cout << i+1 << ": " << playerName[i] << endl;
    }

    //Assign random number to players
    for (int i = 0; i < numberPlayers; i++)
    {
        playerCash[i] = rand();
    }

    // Sort by random numbers
    for (int i = 0; i < numberPlayers; i++)
    {
        for (int j = 0; j < numberPlayers - i - 1; j++)
        {
            if (playerCash[j] > playerCash[j + 1])
            {
                iTemp = playerCash[j];
                playerCash[j] = playerCash[j + 1];
                playerCash[j + 1] = iTemp;
            }
        }
    }

    cout << "These are the players (and random number) in random order:\n";
    for (int i = 0; i < numberPlayers; i++)
    {
        cout << i + 1 << ": " << playerName[i] << "("<<playerCash[i]<<")" << endl;
    }


    startCash = 1500 / numberPlayers; //Calculates starting cash based on number of players
    cout << "Each player will start with $" << startCash << " in cash. \n";
    // Initialize player cash
    for (int i = 0; i < numberPlayers; i++)
    {
        playerCash[i] = startCash;
        cout << playerName[i] << " " << "will start with" << " $ " << playerCash[i] << endl ;
    }

    return 0;
}