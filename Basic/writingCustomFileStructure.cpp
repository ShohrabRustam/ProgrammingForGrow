#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file("players.txt");
    int idNumber;
    double money;
    string name;
    cout << "Enter the Player ID, Name and Money  " << endl;
    cout << "Press Ctrl+Z to exit " << endl;
    // cin >> idNumber >> name >> money;
    while (cin >>idNumber>> name >> money ){
        file << "Id: " << idNumber <<" Name: " << name <<" Money: " << money <<endl;
    }
    return 0;
}