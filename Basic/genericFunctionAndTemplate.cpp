#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp;
    temp=b;
    b=a; 
    a=temp;
    
}
void swap(char &a, char &b){
    char temp;
    temp=b;
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
swap(n,m);
cout <<"After swapping Program value : "<<n<<" "<<m<<endl;

char a , b ;
cout<<"Enter First char"<<endl;
cin >>a;
cout<<"Enter Second char"<<endl;
cin >>b;
cout <<"Original value : "<<a<<" "<<b<<endl;
swap(a,b);
cout <<"After swapping Program value : "<<a<<" "<<b<<endl;

return 0;
}