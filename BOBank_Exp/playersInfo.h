#pragma once

class playersInfo
{
public:
	
	int turnSorter(int Size);
	//Preconditions: An cash values are stored in Cash (integer) and the order is stored in Order (0 first, 1 second, ...)
	//				The size of the arrays are stored in Size
	//Postcondition: The array Order holds index of the smallest value in its 0 index, the second smallest in 1 ...


	int randomCash();
	//Preconditions: None
	//Postconditions: Will fill Cash with random values;


//	Accessor Functions

	string getName(int index);
	// Precondition: index of name to get is in index
	// Postcondition: Name of index is returned


	int getCash(int index);
	// Precondition: index of cash to get is in index
	// Postcondition: Cash of index is returned

	int getTurnOrder(int index);
	// Precondition: index of TurnOrder to get is in index
	// Postcondition: Turn order of index is returned


//  Mutator Functions

	string setName(string theName, int index);
	// Precondition: Name to set is in theName and index is in index
	// Postcondition: value indes of Name is set to theName

	int setCash(int theCash, int index);
	// Precondition: index of cash to set is in index
	// Postcondition: Cash of index is set to theCash

	int setTurnOrder(int theTurnOrder, int index);
	// Precondition: index of TurnOrder to set is in index
	// Postcondition: Cash of index is set to theTrunOrder






private:

	int randomArrayGenerator(int arrayValues[], int arraySize, int maxValue);
	//Precondition: arrayValues is an empty array of size arraySize type integer. maxValue contains the upper limit of values
	//Postcondition: arrayValues will contain random values between 0 and maxValue. Returns size of array.

	string Name[MAXPLAYERS];
	int Cash[MAXPLAYERS];
	int TurnOrder[MAXPLAYERS];
};

