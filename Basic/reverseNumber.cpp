#include<iostream>
using namespace std;
int main(){
int num;
cout <<"Enter a number "<<endl;
cin >> num;
int reversed=0;
int m = num;
while(m > 0){
    reversed = reversed * 10 + (m%10); 
    m = m /10;
}
cout <<"The original number is " << num<<endl;
cout <<"The reversed number is " << reversed<<endl;
 // write your code here  
return 0;
}