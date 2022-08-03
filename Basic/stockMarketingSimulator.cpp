#include<iostream>
//math library
#include<cmath>
using namespace std;
int main(){
float amount;
float principalAmount;
cout<<"Enter the principal amount "<<endl;
cin>>principalAmount;
float rate;
cout<<"Enter the Interest rate "<<endl;
cin>>rate;
rate=rate/100;
int days;
cout<<"Enter the days you want to take Loan "<<endl;
cin>>days;
for(int day = 0; day <days; day++)
{
amount=principalAmount * pow(1+rate,day);
cout<<day+1<<"_______________"<<amount<<endl;
}
return 0;
}