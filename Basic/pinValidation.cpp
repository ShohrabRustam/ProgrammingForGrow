#include<iostream>
using namespace std;
int main(){
// program for pin validation
int UserPin=112233;
int pin;
int errorCounter=0;
do{
    cout << "PIN: "<< endl;
    cin >> pin;
    if(pin!=UserPin){
        errorCounter++;
    }
}while(errorCounter<3 && pin!=UserPin);
if(errorCounter<3){
    cout << "Correct Loading..."<< endl;
}else
{
    cout << "You tried many times So ,You have Blocked..."<< endl;
}
return 0;
}