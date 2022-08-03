#include<iostream>
using namespace std;
int main(){
    // multiplication of the table    
int n;
cout<<"Enter the number to find the table of the number "<<endl;
cin>>n;
cout<<"The table of the number " << n <<" is : "<<endl;
for(int i=1;i<=10;i++){
    cout <<n <<" * "<<i<<" = "<<n*i<<endl;
}
return 0;
}