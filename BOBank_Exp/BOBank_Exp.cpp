//File Name: BOBank_Exp.cpp
//Author: JJ Giesey
//Email Address: jjgiesey@milligan.edu
//Term Project
//Description: This program handles banking duties in the B&O Board Game.
//Version Overloaded Functions
//Last Changed: 02/25/2020

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>


using namespace std;

//Function Declaration
void printList(string names[],int values[], int numberVals);
//Precondition: A list of strings to be printed and an integer value associated with each string
//is given along with the number of strings.
//Postcondition: The strings followed by the value in parentheses are printed on separate lines
//preceded by an index staring with one.

void printList(string names[], int numberVals);
//Precondition: A list of strings to be printed is given along with the number of strings.
//Postcondition: The strings are printed on separate lines preceded by an index staring with one.

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
    cout << "Players \n";
    printList(playerName,numberPlayers);

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
    cout << "Players and (random number) \n";
    printList(playerName, playerCash, numberPlayers);

    startCash = 1500 / numberPlayers; //Calculates starting cash based on number of players
    cout << "Each player will start with $" << startCash << " in cash. \n";
    // Initialize player cash
    for (int i = 0; i < numberPlayers; i++)
    {
        playerCash[i] = startCash;
    }


    //Function Call
    cout << "Players and (cash) \n";
    printList(playerName, playerCash, numberPlayers);
    return 0;
}

//Function Definitions
void printList(string names[], int values[], int numberVals)
{
    for (int i = 0; i < numberVals; i++)
    {
        cout << i + 1 << ": " << names[i] << " (" << values[i] << ")" << endl;
    }
    return;
}

void printList(string names[], int numberVals)
{
    for (int i = 0; i < numberVals; i++)
    {
        cout << i + 1 << ": " << names[i] <<  endl;
    }
    return;
}
