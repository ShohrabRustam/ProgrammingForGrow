#include<iostream>
using namespace std;
int main(){
    cout << "Enter Side of the Triangle"<<endl;
    int a,b,c;
    cout<<"Enter First Side of the Triangle"<<endl;
    cin>>a;
    cout<<"Enter Second Side of the Triangle"<<endl;;
    cin>>b;
    
    cout<<"Enter Third Side of the Triangle"<<endl;;
    cin>>c;
     if(a==b && b==c){
         cout<<"The Triangle is Equilateral"<<endl;
     }else if(a!=b && b!=c && a!=c)
     {
         cout<<"The Triangle is Scalene Triangle"<<endl;
     }
     else{
         cout<<"The Triangle is Isoscalene "<<endl;
     }
 // write your code here  
return 0;
}