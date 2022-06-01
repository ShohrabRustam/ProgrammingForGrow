#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    // to gerate the random number on time0
    srand(time(0));
    cout <<random()%220 <<endl;
return 0;
}