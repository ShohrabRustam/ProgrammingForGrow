//https://www.interviewbit.com/problems/add-one-to-number/

#include <iostream>
#include <vector>

using namespace std;

vector<int> addOne(vector<int> &A){

    return A;
}

int main(){

    // size of array
	int n;
	cin>> n;

    // vector array size n 
	vector<int> v(n, 0);

    // take element of array 
	for(int i=0; i<n; i++)
		cin>> v[i];

    // storing the result in vector array  
	vector<int> result = addOne(v);

    // coutput the array 
	for(int i=0; i<result.size(); i++){
		cout<< result[i] <<" ";
	}

	return 0;
}