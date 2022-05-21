#include <iostream>
using namespace std;
int main()
{
    int luckyNumber[] = {2, 3, 5, 7, 9, 13};
    cout << luckyNumber << endl;
    cout << &luckyNumber[1] << endl;

    cout << luckyNumber[2] << endl;

    cout << *(luckyNumber+2) << endl;

    return 0;
}