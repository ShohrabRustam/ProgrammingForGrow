#include<iostream>
using namespace std;
template<class T>
int recursive_sum(T n, T m){
    int sum = 0;
    for(int i=n; i<=m; i++) 
    sum +=i;
    return sum;
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