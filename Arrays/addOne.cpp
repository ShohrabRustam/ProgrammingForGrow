//https://www.interviewbit.com/problems/add-one-to-number/

#include <iostream>
#include <vector>

using namespace std;

vector<int> addOne(vector<int> &A){

        // increment the last element 
    	A[A.size()-1]++;

        for(int i=A.size();i>=0;i--){
            // check condition for the first index
            if(i==0){
                if(A[i]==0){
                    A.erase(A.begin());
                }
                else if(A[i]>9){
                    int rem = A[i]%10;
                    int main= A[i]/10;
                    A[i]=rem;
                    A.insert(A.begin(),main);
                    break;
                }
            }
            else if(A[i]>9)
            {
                int rem = A[i]%10;
                int main= A[i]/10;
                A[i]= rem;
                A[i-1] +=main; 
            }

            while(A[0]==0)
            {
                A.erase(A.begin());
            }

        }

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