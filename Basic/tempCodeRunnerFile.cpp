#include<iostream>
using namespace std;
int main(){
    int num1,num2;
// WAP which take two inputs a,b as range where a <b if the number in this range divisible by the 3 print fizz if divisible by 5 print buzz and for both print fizzBuzz else print number
cout <<"Enter the first number"<<endl;
cin >> num1;
cout <<"Enter the Second number"<<endl;;
cin >> num2;
for(int i=num1;i<=num2;i++){
    if(i%15==0) 