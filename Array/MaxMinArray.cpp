#include <iostream>
using namespace std;

int main()
{
    int min = 2147483647;
    int max = -2147483648;
    // size of array
    int n;
    cout << "Enter the size of Array " << endl;
    cin >> n;
    int a[n];
    cout << "Enter the " << n << " elements inside an array  " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }

        if (min > a[i])
        {
            min = a[i];
        }
    }

    cout << "The maximum element in array : " << max << endl;
    cout << "The minimum element in array : " << min << endl;

    return 0;
}