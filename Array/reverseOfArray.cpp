#include <algorithm>
#include <iostream>
using namespace std;
  
int main()
{
    // Get the array
    cout <<"Enter the Size of Array "<<endl;
    int n;
    cin >>n;
    int arr[n];
    cout <<"Enter the "<<n <<" element in array "<<endl;
    for(int i=0;i<n;i++){
        // cout <<"Enter the "<<i<<"th element of array "<<endl;
        cin >>arr[i];
    }
  
    // Print the array
    cout << "Original Array: "<<endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
  
    // Reverse the array
    reverse(arr, arr + n);

  
    // Print the reversed array
    cout << "\nReversed Array: "<<endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
