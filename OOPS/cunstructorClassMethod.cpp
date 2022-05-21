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
    Organization(string name, string ceo, string des, int noEmp)
    {
         orgName=name;
         ceoName=ceo;
        desc=des;
        numbersOfEmployees=noEmp;
    }

    // Organization()
    //     {
    //     }
    void aboutCompany()
    {
        cout << "Organization orgName : " << orgName << endl;
        cout << "Organization CEO :" << ceoName << endl;
        cout << "Organization Description : " << desc << endl;
        cout << "Organization numberOfEmployees : " << numbersOfEmployees << endl;
    }
    
    void bestEmp()
    {
        for (string employess : bestEmployees)
        {
            cout << employess << "    ";
        }

    };
};
    int main()
    {
        Organization object("Mpokket", "Gourav Jalan", "The Organization is best in fintech", 1500);
        object.bestEmployees.push_back("Rustam");
        object.bestEmployees.push_back("Salma");
        object.bestEmployees.push_back("Hanvesh");
        // object.orgName = "Mpokket";
        // object.ceoName = "Gourav Jalan";
        // object.desc = "The Best Organization in fintec";
        // object.numbersOfEmployees = 1269;
        // object.bestEmployees = {"Rustam", "Salma", "Hanvesh", "Abhishek"};
        object.aboutCompany();
        cout << "Best Employee: " << endl;
        object.bestEmp();

        cout << endl;
        // Organization object1;
        // object1.orgName = "Mpokket PVT";
        // object1.ceoName = "Ajay Jalan ";
        // object1.desc = "The Best Organization IN Fintec";
        // object1.numbersOfEmployees = 1700;
        // object1.bestEmployees = {"Umme Salma", "Shohrab Rustam", "Hanvesh", "Abhishek "};
        // object1.aboutCompany();
        // for (string employess : object1.bestEmployees)
        // {
        //     cout << employess << "    ";
        // }

        cout << endl;
        return 0;
    }