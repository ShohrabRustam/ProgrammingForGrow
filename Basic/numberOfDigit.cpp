#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number to count Number of Digits " << endl;
    cin >> num;
    int count = 0;
    if (num < 0)
    {
        num = (-1) * num;
    }
    if (num == 0)
    {
        cout << "Number is " << num << "Digists is : " << 1 << endl;
    }
    while (num)
    {
        count++;
        num = num / 10;
    }
    cout << "The number of Digits is " << count << endl;

    return 0;
}