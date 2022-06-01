#include <iostream>
using namespace std;
int main()
{
    try
    {
        int num1, num2;
        cout << "Enter the First Number " << endl;
        cin >> num1;
        cout << "Enter the Second Number " << endl;
        cin >> num2;
        if (num2 == 0)
        {
            throw 0;
        }
        cout << (float)num1 / num2 << endl;
    }
    catch (int x)
    {
        cout << "You can not devide by " << x << endl;
    }
    return 0;
}