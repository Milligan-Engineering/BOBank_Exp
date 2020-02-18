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
    
    //Sort names alphabetically (poorly)
    for (int j = 0; j < numberPlayers; j++)
    {
        for (int i = 0; i < numberPlayers - j; i++)
        {
            if (playerName[i] > playerName[i + 1])
            {
            temp = playerName[i];
            playerName[i] = playerName[i + 1];
            playerName[i + 1] = temp;
            }
          }   
    }

    cout << "These are the players:\n";
    for (int k = 0; k < numberPlayers; k++)
    {
        cout << k+1 << ": " << playerName[k] << endl;
    }

    //Assign random number to players
    for (int i = 0; i < numberPlayers; i++)
    {
        playerCash[i] = rand();
    }

    // Sort by random numbers
    for (int j = 0; j < numberPlayers; j++)
    {
        for (int i = 0; i < numberPlayers - j; i++)
        {
            if (playerCash[i] > playerCash[i + 1])
            {
                iTemp = playerCash[i];
                playerCash[i] = playerCash[i + 1];
                playerCash[i + 1] = iTemp;

            }
        }
    }

    cout << "These are the players:\n";
    for (int k = 0; k < numberPlayers; k++)
    {
        cout << k + 1 << ": " << playerName[k] << endl;
    }


    startCash = 1500 / numberPlayers; //Calculates starting cash based on number of players
    cout << "Each player will start with $" << startCash << " in cash. \n";
    // Initialize player cash
    for (int c = 0; c <= numberPlayers; c++)
    {
        playerCash[c] = startCash;
        cout << playerName[c] << " " << "will start with" << " $ " << playerCash[c] << endl ;
    }

    return 0;
}