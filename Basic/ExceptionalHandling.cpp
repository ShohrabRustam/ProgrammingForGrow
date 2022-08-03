#include <iostream>
using namespace std;
int main()
{
    try{
        int motherAge = 30; //
        int sonAge = 45;    //
        if (sonAge > motherAge)
        {
            // throw std::invalid_argument("Age must be Less than Mother age");
            throw 99;
        }
    }catch(int x)
        {
            cout << "Son age can not be older than mother age, Error Number: " << x << endl;
        }
    return 0;
}