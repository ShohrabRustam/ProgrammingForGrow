#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int b = 21;
    cout << "Value of a and b are before swapping : " << a << "  " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Value of a and b are before swapping : " << a << "  " << b << endl;

    return 0;
}