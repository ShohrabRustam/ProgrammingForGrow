#include<iostream>
using namespace std;
int getMinNumber(int a[],int n){
    int min = a[0];
    for(int i=0;i<n;i++){
        if(min>a[i])
        min=a[i];
    }
    return min;
}
int getMaxNumber(int a[],int n){
    int max = a[0];
    for(int i=0;i<n;i++){
        if(max<a[i])
        max=a[i];
    }
    return max;
}
int main(){
int number[]={5,4,-2,1,6};
int size= sizeof(number)/sizeof(number[0]);
// cout<<"Size : ";
// cout<<size<<endl;
cout <<"Min number : ";
cout<<getMinNumber(number,size)<<endl;
cout <<"Max number : ";
cout<<getMaxNumber(number,size)<<endl;

return 0;
}