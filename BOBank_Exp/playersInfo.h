#pragma once

class playersInfo
{
public:
	
	int turnSorter(int Cash[], int Order[], int Size);
	//Preconditions: An cash values are stored in Cash (integer) and the order is stored in Order (0 first, 1 second, ...)
	//				The size of the arrays are stored in Size
	//Postcondition: The array Order holds index of the smallest value in its 0 index, the second smallest in 1 ...

	string Name[MAXPLAYERS];
	int Cash[MAXPLAYERS];
	int TurnOrder[MAXPLAYERS];

private:


};

