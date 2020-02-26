//File Name: BOBank_Exp.cpp
//Author: JJ Giesey
//Email Address: jjgiesey@milligan.edu
//Term Project
//Description: This program handles banking duties in the B&O Board Game.
Bad Loop Version
//Version BL
//Last Changed: 02/11/2020

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>


using namespace std;

//Function Declaration
int printPlayerInfo(int numberPlayersVal);
//Precondition: The number of players is passed to function as an integer. Also there is data in arrays 
//playerName and playerCash.
//Postcondition: The player names and amount of their cash is printed out. The maximum abount of cash is returned.

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
        cout << "Enter player " << i + 1 << " name: ";
        cin >> playerName[i];
    }

    //Function Call
    cout << "The maximum cash is: $" << printPlayerInfo(numberPlayers) << endl;

    // Seed random variable
    long int currentTime = static_cast<long int>(time(0)); //Generate random seed
    srand(currentTime);

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
                temp = playerName[j];
                iTemp = playerCash[j];
                playerName[j] = playerName[j + 1];
                playerCash[j] = playerCash[j + 1];
                playerName[j + 1] = temp;
                playerCash[j + 1] = iTemp;
            }
        }
    }

    //Function Call
    cout << "The maximum cash is: $" << printPlayerInfo(numberPlayers) << endl;

    startCash = 1500 / numberPlayers; //Calculates starting cash based on number of players
    cout << "Each player will start with $" << startCash << " in cash. \n";
    // Initialize player cash
    for (int i = 0; i < numberPlayers; i++)
    {
        playerCash[i] = startCash;
    }


    //Function Call
    cout << "The maximum cash is: $" << printPlayerInfo(numberPlayers) << endl;
    return 0;
}

//Function Definition
int printPlayerInfo(int numberPlayersVal)
{
    //local variables are numberPlayersVal and maxCash
    int maxCash = 0;
    for (int i = 0; i < numberPlayersVal; i++)
    {
        cout << i + 1 << ": " << playerName[i] << " ($" << playerCash[i] << ")" << endl;
        if (maxCash < playerCash[i])
        {
            maxCash = playerCash[i];
        }
    }
    return(maxCash);
}
