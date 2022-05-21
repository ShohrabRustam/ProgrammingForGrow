#include <iostream>
using namespace std;
int main()
{
    // int luckyNumber[5] = {2, 3, 5, 7, 9, 13};
    // cout << luckyNumber << endl;
    // cout << &luckyNumber[1] << endl;

    // cout << luckyNumber[2] << endl;

    // cout << *(luckyNumber+2) << endl;
    int luckyNumber[5];

    for (int i = 0; i <= 5; i++)
    {
        cout << "Enter " << i << " Number : " << endl;
        cin >> luckyNumber[i];
    }

    cout <<endl<< "Normal OUTPUT : " << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << luckyNumber[i] << endl;
    }
     cout <<endl<< "Pointer OUTPUT : " << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << *(luckyNumber + i) << endl;
    }
    return 0;
}