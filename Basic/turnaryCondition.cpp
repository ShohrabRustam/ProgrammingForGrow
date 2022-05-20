#include<iostream>
using namespace std;
int main(){
int hostUserNumber,guestUserNum;
cout << "Host : "<<endl;
cin >> hostUserNumber;
cout << "Guest : "<<endl;
cin >> guestUserNum;
(hostUserNumber==guestUserNum)?cout<<"Correct!"<<endl:cout<<"Failed!"<<endl;
// if(hostUserNumber==hostUserNumber){
// cout << "Correct!"<<endl;
// }
// else  {
//     cout << "Failed"<<endl;
// }
return 0;
}