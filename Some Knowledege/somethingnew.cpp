#include <iostream>
using namespace std;
int main()
{
    // Braces initializer_list
    int a {2};
    int b {3};
    float c{2.4};
    cout <<"The value of a : using Braces : "<<a<<endl;
    cout <<"The value of b : "<<b<<endl;
    cout<<"The value of c : "<<c<<endl;

    //Functional Initializer 
    int a1(1);
    int b1(3);
    cout <<"The value of a1 using functional Initialization : "<<a1<<endl;
    cout <<"The value of b1 : using functional Initialization : "<<b1<<endl;
return 0;
}