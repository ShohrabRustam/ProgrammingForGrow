// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

/*function to print an array */
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    // declareArray of size n
    int arr[size];
    cout << "Enter " << size << " Element of the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // To print original array
    cout << "Original Array is : " << endl;
    printArray(arr, size);

    // Function calling
    reverseArray(arr, 0, size - 1);

    cout << "Reversed array is" << endl;

    // To print the Reversed array
    printArray(arr, size);

    return 0;
}
