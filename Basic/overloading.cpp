#include<iostream>
using namespace std;
int sum(int a,int b) {
    return a+b;
}
double sum(double a,double b) {
    return a+b;
}
float sum(float a,float b,float c) {
    return a+b+c;
}
int main(){
cout <<sum(3,5 )<<endl;
cout <<sum(3.2,4.5)<<endl;
cout <<sum(3.2,5.5,1.3)<<endl;
return 0;
}