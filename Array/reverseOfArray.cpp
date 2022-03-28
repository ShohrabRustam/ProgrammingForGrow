#include <algorithm>
#include <iostream>
using namespace std;
  
int main()
{
    // Get the array
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
  
    // Print the array
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
  
    // Reverse the array
    reverse(arr, arr + n);
  
    // Print the reversed array
    cout << "\nReversed Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
