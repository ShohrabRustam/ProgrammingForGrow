#include<iostream>
using namespace std;
int main(){
int number;
int  result;
cout<<"Enter the number to find the factorial"<<endl;
cin >>number;
int factorial= 1;
if(number<0){
    cout<<"Invald number"<<endl;
    return 0;
}else if(number==0 || number==1){
cout<<"Factorial of "<<number<<" is : "<<factorial<<endl;
return 0;
}else{
    for(int i=1;i<=number;i++){
        factorial=factorial*i;
    }
cout<<"Factorial of "<<number<<" is : "<<factorial<<endl;
return 0;
}
return 0;
}