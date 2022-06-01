#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    // to gerate the random number on time0
    srand(time(0));
    cout <<time(0) << " ";

    cout << random() % 6 << endl;
    return 0;
}