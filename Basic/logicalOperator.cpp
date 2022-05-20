#include<iostream>
using namespace std;
int main(){
int a = 0;
int b = 1;
cout << (a==b)<<endl;
cout << (a<=b)<<endl;
cout << (a>=b)<<endl;
cout << (a!=b)<<endl;
cout << (a==b && a<=b)<<endl;
cout << (a<=b && a>=b)<<endl;
cout << (a>=b || a<=b)<<endl;
cout << (a!=b || a<=b)<<endl;

return 0;
}