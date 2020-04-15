//File Name: BOBank_Exp.cpp
//Author: JJ Giesey
//Email Address: jjgiesey@milligan.edu
//Term Project
//Description: This program handles banking duties in the B&O Board Game.
//Class Implemented in File
//Last Changed: 04/15/2020




#include "stdafx.h"

#include "playersInfo.h"


int randomArrayGenerator(int arrayValues[], int arraySize, int maxValue);
//Precondition: arrayValues is an empty array of size arraySize type integer. maxValue contains the upper limit of values
//Postcondition: arrayValues will contain random values between 0 and maxValue. Returns size of array.



int main()
{
	int numberOfPlayers;
	int value;
	playersInfo players;


	cout << "Welcome to the B&O Banker Assistant \n";


	// Retrieve and validate number of players
	cout << "How many players will be playing?";
	cin >> numberOfPlayers;
	while ((numberOfPlayers < MINPLAYERS) || (numberOfPlayers > MAXPLAYERS)) // Check to see if numberOfPlayer is in range
	{
		cout << "Number of players must be between " << MINPLAYERS << " and " << MAXPLAYERS << ". Please enter number again.";
		cin >> numberOfPlayers;
	}
	cout << "There will be " << numberOfPlayers << " players.\n";// Echo number of players
	// Read player names

	for (int i = 0; i < numberOfPlayers; i++)
	{
		cout << "Enter name of Player " << i + 1 << ": ";
		cin >> players.Name[i];
		players.TurnOrder[i] = i; //initialize playerTurnOrder array
	}
	cout << endl;

	// Assigning random cash values
	randomArrayGenerator(players.Cash, MAXPLAYERS, 500);

	//Sort names by their cash

	players.turnSorter(players.Cash, players.TurnOrder, numberOfPlayers);


	// Assign inital cash values to players
	for (int i = 0; i < numberOfPlayers; i++)
	{
		players.Cash[i] = 1500 / numberOfPlayers;
	}

	// Write player names in random order
	cout << "Initial Order \n";
	for (int i = 0; i < numberOfPlayers; i++)
	{
		cout << i << ": " << players.Name[players.TurnOrder[i]] << "(" << players.Cash[players.TurnOrder[i]] << ")" << endl;
	}
	cout << endl;

	cout << "Enter character to continue \n";
	cin >> value;

	return(0);
}

int randomArrayGenerator(int arrayValues[], int arraySize, int maxValue)
{
	//Make random number array
	long int currentTime = static_cast<long int>(time(0)); //Generate random seed
	srand(currentTime);
	for (int i = 0; i < arraySize; i++)
	{
		arrayValues[i] = rand() % maxValue; // assign random number
	}
	return(arraySize);
}





