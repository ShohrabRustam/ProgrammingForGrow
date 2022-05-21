#include <iostream>
#include <list>
using namespace std;
class Profile
{
public:
    string name;
    string mobile;
    string address;
    list<string> hobbies;

public:
    Profile(string name, string mobile, string address)
    {
        this->name = name;
        this->mobile = mobile;
        this->address = address;
    }

    void getInfo()
    {
        cout << endl ;
        cout << name << " " << mobile << " " << address << endl;
    }
    void setHobbies(string title)
    {
        hobbies.push_back(title);
    }


    void getHobbies()
    {
        cout <<"Your Hobbies is " << hobbies.size() << endl;
        for (string hobby : hobbies)
        {
            cout << hobby << "    ";
        }
        cout <<endl;
    }

};
int main()
{
    Profile p("Shohrab","7417200362","Uttra khand");
    p.setHobbies("playing Card");
    p.setHobbies("playing Chess");
    p.setHobbies("playing Takken");
    p.setHobbies("Travelling");
    p.getInfo();
    p.getHobbies();

    Profile p1("Salma","9988776644","Karnataka");
    p1.setHobbies("Salman khan Movie");
    p1.setHobbies("Bloging");
    p1.setHobbies("Listing Music");
    p1.setHobbies("Shoping");
    p1.getInfo();
    p1.getHobbies();

    return 0;
}