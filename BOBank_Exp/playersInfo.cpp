#include "stdafx.h"
#include "playersInfo.h"


int playersInfo::turnSorter(int Values[], int Order[], int Size)
{
	int temp;
	for (int i = 0; i < Size - 1; i++)
	{
		for (int j = 0; j < Size - i - 1; j++)
		{
			if (Values[Order[j]] > Values[Order[j + 1]])
			{
				temp = Order[j];
				Order[j] = Order[j + 1];
				Order[j + 1] = temp;
			}
		}
	}
	return(0);
}
