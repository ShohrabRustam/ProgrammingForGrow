#include<iostream>
using namespace std;
// find the average age of each member taken by each
int main(){
int age = 0;
int result = 0;
int count = 0;
while (age!=-1)
{
    cout <<"Enter the Age of "<< count+1 <<" Member or enter -1 if you done for all Get the result " <<endl;
    cin >> age;
    result+=age;
    count++;
}
cout <<"The User you Entered is : "<<count<<". The Average of Age : "<<(float)result/count<<endl;

 // write your code here  
return 0;
}