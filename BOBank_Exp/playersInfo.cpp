#include "stdafx.h"
#include "playersInfo.h"


int playersInfo::turnSorter(int Size)
{
	int temp;
	for (int i = 0; i < Size - 1; i++)
	{
		for (int j = 0; j < Size - i - 1; j++)
		{
			if (Cash[TurnOrder[j]] > Cash[TurnOrder[j + 1]])
			{
				temp = TurnOrder[j];
				TurnOrder[j] = TurnOrder[j + 1];
				TurnOrder[j + 1] = temp;
			}
		}
	}
	return(0);
}


int playersInfo::randomArrayGenerator(int arrayValues[], int arraySize, int maxValue)
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


int playersInfo::randomCash()
{
	randomArrayGenerator(Cash, MAXPLAYERS, 500);
	return(1);
}

// Accessor Functions


string playersInfo::getName(int index)
{
	return (Name[index]);
}

int playersInfo::getCash(int index)
{

	return (Cash[index]);
}

int playersInfo::getTurnOrder(int index)
{

	return (TurnOrder[index]);
}

//  Mutator Functions

string playersInfo::setName(string theName, int index)
{
	Name[index] = theName;
	return (theName);
}
int playersInfo::setCash(int theCash, int index)
{
	Cash[index] = theCash;
	return (theCash);
}
int playersInfo::setTurnOrder(int theTurnOrder, int index)
{
	TurnOrder[index] = theTurnOrder;
	return (theTurnOrder);
}