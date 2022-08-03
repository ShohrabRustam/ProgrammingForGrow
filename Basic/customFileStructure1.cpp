#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // input file streams
    ifstream theFile("student.txt");
    // outputFile streams
    ofstream outputFile("students.txt");
    int Rollno;
    double money;
    string name;
    cout << "Enter the student Rollno, Name ,  Montly Fee  " << endl;
    cout << "Press Ctrl+Z to exit " << endl;
    // cin >> idNumber >> name >> money;
    while (theFile >> Rollno >> name >> money)
    {
        cout << "Rollno: " << Rollno << " Name: " << name << " Money: " << money << endl;
        outputFile << "Rollno: " << Rollno << " Name: " << name << " Money: " << money << endl;
    }
    return 0;
}