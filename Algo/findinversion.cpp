#include<iostream>
#include<vector>
using namespace std;
int inversion(int a[],int n){
    int count = 0;
    for(int i=0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(a[i]>a[j] && i<j){
                count++;
            }
        }
    }
    return count;
}
int main (){
    int n ;
    // size of array 
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    int result = inversion(a,n);

    cout<<endl<<"Result : "<<result<<endl;
}
