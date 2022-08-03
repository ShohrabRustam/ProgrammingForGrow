#include <iostream>
using namespace std;
void passByValue(int x);
void passByReference(int *x);

int main()
{

    int x = 13;
    int y = 14;
    passByValue(x);
    passByReference(&y);
    cout << "The value of x now is " << x << " and the value of y now is " << y << endl;
    return 0;
}

void passByValue(int x)
{
    x = 99;
    cout << "The value Pass by Value is : " << x << endl;
}

void passByReference(int *x)
{
    *x = 99;
    cout << "The value Pass by Value is : " << *x << endl;
}