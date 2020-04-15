//File Name: BOBank_Exp.cpp
//Author: JJ Giesey
//Email Address: jjgiesey@milligan.edu
//Term Project
//Description: This program handles banking duties in the B&O Board Game.
//Encapsulation
//Last Changed: 04/15/2020




#include "stdafx.h"

#include "playersInfo.h"


int main()
{
	int numberOfPlayers;
	int value;
	string tempString;
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
		cin >> tempString;
		players.setName(tempString,i);
		players.setTurnOrder(i,i); //initialize playerTurnOrder array
	}
	cout << endl;

	// Assigning random cash values
	players.randomCash();

	//Sort names by their cash

	players.turnSorter(numberOfPlayers);


	// Assign inital cash values to players
	for (int i = 0; i < numberOfPlayers; i++)
	{
		players.setCash(1500 / numberOfPlayers,i);
	}

	// Write player names in random order
	cout << "Initial Order \n";
	for (int i = 0; i < numberOfPlayers; i++)
	{
		cout << i << ": " << players.getName(players.getTurnOrder(i)) << "(" << players.getCash(players.getTurnOrder(i)) << ")" << endl;
	}
	cout << endl;

	cout << "Enter character to continue \n";
	cin >> value;

	return(0);
}




