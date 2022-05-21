#include<iostream>
using namespace std;
template<class T>
void swapNumber(T& a, T& b){
    T temp=b;
    b=a; 
    a=temp;
    
}
int main(){
int n , m ;
cout<<"Swapping Program"<<endl;
cout<<"Enter first number"<<endl;
cin >>n;
cout<<"Enter Second number"<<endl;
cin >>m;
cout <<"Original value : "<<n<<" "<<m<<endl;
swapNumber(n,m);
cout <<"After swapping Program value : "<<n<<" "<<m<<endl;

char a , b ;
cout<<"Enter First char"<<endl;
cin >>a;
cout<<"Enter Second char"<<endl;
cin >>b;
cout <<"Original value : "<<a<<" "<<b<<endl;
swapNumber(a,b);
cout <<"After swapping Program value : "<<a<<" "<<b<<endl;

 // write your code here  
return 0;
}