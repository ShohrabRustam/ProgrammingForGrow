#include<iostream>
using namespace std;
int main(){
    int grade, sum=0;
    for(int i=0;i < 3; i++){
           do{
            cout <<"Enter grade "<<i+1<<endl;
            cin >> grade;
           }while(grade<1 || grade>5);
           sum+=grade;
    }
    cout <<"Sum of grade : "<<sum<<endl;
    cout <<"Average of grade : "<<(float)sum/3<<endl;
    return 0;
}