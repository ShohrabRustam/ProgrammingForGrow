// C++ program to dynamically allocate
// using new operator
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    // Dimensions of the 2D array
    int rows = 3;
    int cols = 4;
    int c = 0;
    // Declare a memory block of
    // size rows*cols
    int *arr = new int[rows * cols];

    // Traverse the 2D array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            // Assign values to
            // the memory block
            *(arr + i * cols + j) = ++c;
        }
    }

    // Traverse the 2D array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            // Print values of the
            // memory block
            cout << *(arr + i * cols + j)
                 << " ";
        }
        cout << endl;
    }

    // Delete the array created
    delete[] arr;

    return 0;
}
