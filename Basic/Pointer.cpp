#include <iostream>
using namespace std;
int main()
{
    int fish = 5;
    cout << "Addess of the fish Variable : " << &fish << endl;
    int *fishPointer;
    fishPointer = &fish;
    cout << "Fish using the Pointer : " << *fishPointer << endl;
    return 0;
}