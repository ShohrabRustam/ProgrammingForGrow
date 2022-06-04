#include<iostream>
#include<algorithm>
using namespace std;

void minMaxElement(int arr[], int size,int position)
{
sort(arr,arr+size);
if(position>size)
{
    cout <<-1;
}
else{
    cout <<" Max element position : "<<position <<" is "<<arr[position-1]<<endl;
    cout <<" Min element position : "<<position <<" is "<<arr[size-position]<<endl;
}
}
int main(){
// size of array
int size;

cout<<"Enter size of array"<<endl;
cin>>size;

// initilize of array of size = size
int array[size];

cout<<"Enter "<<size << " elements of array"<<endl;
for(int i=0;i<size;i++){
    cin>>array[i];
}
int position;
cout <<"Enter the position of the array to find Min and max elements of the array"<<endl;
cin>>position;
minMaxElement(array,size,position);
return 0;
}