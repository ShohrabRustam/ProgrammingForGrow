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
        cout << "Organization numberOfEmployees : " << Organization::numbersOfEmployees << endl;
    }
};
int main()
{
    Organization object;
    object.orgName = "Mpokket";
    object.ceoName = "Gourav Jalan";
    object.desc = "The Best Organization in fintec";
    object.numbersOfEmployees = 1269;
    object.bestEmployees = {"Rustam", "Salma", "Hanvesh", "Abhishek"};
    object.aboutCompany();
    cout << "Best Employee: " << endl;
    for (string employess : object.bestEmployees)
    {
        cout << employess << "    ";
    }
    cout << endl;
    Organization object1;
    object1.orgName = "Mpokket PVT";
    object1.ceoName = "Ajay Jalan ";
    object1.desc = "The Best Organization IN Fintec";
    object1.numbersOfEmployees = 1700;
    object1.bestEmployees = {"Umme Salma", "Shohrab Rustam", "Hanvesh", "Abhishek "};
    object1.aboutCompany();
    for (string employess : object1.bestEmployees)
    {
        cout << employess << "    ";
    }

    cout << endl;
    return 0;
}