#include<iostream>
using namespace std;
int main(){
int num;
cout <<"Enter the number to count Number of Digits " << endl;
cin >> num;
int count=0;
while (num)
{
    count++;
    num=num/10;
}
cout <<"The number of Digits is " << count << endl;


return 0;
}