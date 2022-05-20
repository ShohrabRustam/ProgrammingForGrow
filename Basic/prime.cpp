#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n==0 || n==1) 
    return false;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
        return false;
        }
    }
return true;
}
int main(){
    int number;
cout << "Enter a number"<<endl;
cin >>number;
if(isPrime(number)){
    cout << "Prime"<<endl;
}else{
    cout << "Not prime"<<endl;
}
return 0;
}