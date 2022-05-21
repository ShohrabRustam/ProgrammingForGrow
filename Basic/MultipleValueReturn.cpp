#include<iostream>
using namespace std;
int getMinMax(int a [], int size,int *min, int *max){
for(int i = 0; i < size;i++){
    if(a[i] < *min){
        *min=a[i];
    }
    if(a[i] > *max){
        *max=a[i];
    }
}
    return 0;
}
int main(){
    int size;
cout<<"Enter the size of the arary : "<<endl;
// size of the array
cin >> size;
// declare the array 
int a[size];
cout << "Enter the "<<size<<" elements of the array"<<endl;
for(int i=0;i<size;i++){
    cin >> a[i];
}
int min = a[0];
int max = a[0];
getMinMax(a,size,&min,&max);
cout <<"Min Element : " <<min<<endl;
cout <<"Max Element : " <<max<<endl;

return 0;
}