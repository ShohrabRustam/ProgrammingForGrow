#include<iostream>
#include<algorithm>
using namespace std;
int main(){

string str1;

cout <<"enter the first string "<<endl;
getline(cin, str1);
string str2;
cout <<"Enter the second String "<<endl;
getline(cin, str2);

int n = str1.length();
sort (str1.begin(),str2.end());
sort(str2.begin(),str2.end());

if(str1==str2){
    cout <<"Anagram String "<<endl;
}else{
    cout <<"The String is not Anagram "<<endl;
}
return 0;
}