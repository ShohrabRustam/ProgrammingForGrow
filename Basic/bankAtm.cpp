#include<iostream>
using namespace std;
void showMenu(){
    cout << "***************************MENU*************************************"<<endl;
    cout << "1. Check Balance"<<endl;
    cout << "2. Deposit"<<endl;
    cout << "3. Withdraw"<<endl;
    cout << "4. Exit"<<endl;

}
int main(){

//check balance, deposit balance,withdraw balance,show menu  
double balance=0;
int option;
do{
showMenu();
cout << "OPTION : "<<endl;
cin >> option;
 switch (option)
 {
 case 1:
 cout<<"Balance is : "<<balance<<" $"<<endl;
break;
case 2:
cout<<"Deposit Amount"<<endl;
double depositAmount;
cin >>depositAmount;
balance+=depositAmount;
cout<<endl<<"Deposit Successfully"<<endl;
break;
 case 3:
 cout<<"Withdraw Amount"<<endl;
double withdrawAmount;
cin >>withdrawAmount;
if(withdrawAmount>balance) {
cout <<"Less Withdraw amount is invald !! You have not sufficient amount to withdraw"<<endl;
break;
}else{
balance-=withdrawAmount;
cout<<endl<<"withdraw Successfully"<<endl;
break;
}
 case 4:
 cout<<"Exit Successfully"<<endl;

 default:
 cout<<endl<<"Invalid Option "<<endl;
 }
 }while (option!=4);
 
 
return 0;
}