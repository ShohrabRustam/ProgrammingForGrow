#include<iostream>
using namespace std;
class Student{
    public :
    string name;
    void setName(string name){
        this->name = name;
    }
    void getName(){
        cout <<"My name is " << this->name<<endl;
    }
};
int main(){
Student s;
s.setName("Rustam");
s.getName();
 // write your code here  
return 0;
}