#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array " << endl;
    cin >> size;
    int *myArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "]: ";
        cin >> myArray[i];
    }
    for (int i = 0; i < size; i++)
    {
        // cout<<"Array["<<i<<"]: ";
        // cout << myArray[i] << " ";
        cout << *(myArray+i) <<  " ";
    }
    cout << endl;
    delete[] myArray;
    return 0;
}
