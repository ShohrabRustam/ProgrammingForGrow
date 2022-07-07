#include <iostream>
#include <algorithm>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int sort012(int a[], int n)
{
    int low = 0;
    int high = n - 1;
    int mid = 0;
    while (mid < high)
    {
        if (a[mid] == 1)
        {
            mid++;
        }
        else if (a[mid] == 0)
        {
            int temp = a[mid];
            a[mid] = a[low];
            a[low] = temp;
            low++;
            mid++;
        }
        else
        {
            int temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
            high--;
        }
    }
}
int main()
{
    int size;
    cout << "Enter Size" << endl;
    cin >> size;
    int array[size];
    cout << "Enter " << size << " elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout <<"Original Array"<< endl;
    printArray(array, size);
    sort012(array,size);
    cout<<"Array After Sort"<< endl;
    printArray(array,size);
}