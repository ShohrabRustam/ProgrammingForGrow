#include <iostream>
using namespace std;
#include <list>
class Organization
{
public:
    string orgName;
    string ceoName;
    string desc;
    int numbersOfEmployees;
    list<string> bestEmployees;
    void aboutCompany()
    {
        cout << "Organization orgName : " << Organization::orgName << endl;
        cout << "Organization CEO :" << Organization::ceoName << endl;
        cout << "Organization Description : " << Organization::desc << endl;
        cout << "Organization numberOfEmployees : "<<Organization::numbersOfEmployees<<endl;
    }
};
int main()
{
    Organization object;
    object.orgName = "Mpokket";
    object.ceoName = "Gourav Jalan";
    object.desc = "The Best Organization in fintec";
    object.numbersOfEmployees =1269;
    object.bestEmployees ={"Rustam","Salma","Hanvesh","Abhishek"};
    object.aboutCompany();
    cout << "Best Employee: " <<endl;
    for (string employess: object.bestEmployees){
        cout << employess <<"    ";
    }
    cout <<endl;
    return 0;
}