#include<iostream>
using namespace std;
template<class T>
T recursive_sum(T n, T m){
    if(n==m) 
    return n;
    return n + recursive_sum(n+1,m);
}
int main(){
//sum of between two numbers
int n;
cout << endl << "Recursive function to find the sum  between of two numbers" << endl;
cout <<endl << "Enter the First numbers" << endl;
cin >> n;
int m ;
cout << "Enter the First numbers" << endl;
cin >> m;
cout<<endl<<recursive_sum(n,m)<<endl;
return 0;
}