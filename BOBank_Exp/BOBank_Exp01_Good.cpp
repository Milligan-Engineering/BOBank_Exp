// BOBank_Exp.cpp : Version 01
// Bad Code Version
// There are at least eight bugs in this program. See if you can find them.

#include <iostream>
#include <string>
using namespace std;

int numberPlayers, startCash;
string Player1, Player2, Player3, Player4, Player5, Player6 ;

int main()
{
    cout << "Welcome to the B&O Banker Program\n";
    cout << "Enter the number of players: ";
    cin >> numberPlayers;
    startCash = 1500 / numberPlayers;
    cout << "Enter player 1 name: ";
    cin >> Player1;
    cout << "Enter player 2 name: ";
    cin >> Player2;
    cout << "Enter player 3 name: ";
    cin >> Player3;
    cout << "Enter player 4 name: ";
    cin >> Player4;
    cout << "Enter player 5 name: ";
    cin >> Player5;
    cout << "Enter player 6 name: ";
    cin >> Player6;
    cout << "These are the players:\n";
    cout << " 1: " << Player1 << endl;
    cout << " 2: " << Player2 << endl;
    cout << " 3: " << Player3 << endl;
    cout << " 4: " << Player4 << endl;
    cout << " 5: " << Player5 << endl;
    cout << " 6: " << Player6 << endl;

    return 0;
}
