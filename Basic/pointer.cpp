#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    // print the address of the n 
    cout << &n << endl;
    // define a pointer that conatin the address of the variables
    int *ptr = &n;
    // ptr= &n; 
    *ptr = 10;
    cout << *ptr <<"   "<<n<< endl;
    return 0;
}