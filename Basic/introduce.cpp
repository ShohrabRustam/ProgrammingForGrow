#include<iostream>
using namespace std;
void introduceMe(string name,int age,string city){
    cout <<"My name is " << name << endl;
    if(age<=0){
        cout <<"Age must be greater than zero." << endl;
    }
    cout<<"Age is " << age << endl;
    cout<<"City is " << city << endl;
}
int main(){
    string name;
    cout <<"Enter name: "<< endl;
    cin>>name;
    int age;
    cout<<"Enter age: "<< endl;
    cin>>age;
    string city;
    cout<<"Enter city: "<< endl;
    cin>>city;
introduceMe(name,age,city);
return 0;
}