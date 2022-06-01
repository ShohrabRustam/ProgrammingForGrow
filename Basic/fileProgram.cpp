#include <iostream>
#include <fstream>
using namespace std;
// displayItems function
void displayItems(int x)
{
    ifstream objectFile("objects.txt");
    string name;
    string yearPublished;
    int rating;
    if (x == 1)
    {
        while (objectFile >> name >> yearPublished >> rating)
        {
            if (rating == 0)
            {
                cout << "Name: " << name << " yearPublished" << yearPublished << " Rating: " << rating << endl;
            }
        }
    }
    if (x == 2)
    {
        while (objectFile >> name >> yearPublished >> rating)
        {
            if (rating == 0)
            {
                cout << "Name: " << name << " yearPublished" << yearPublished << " Rating: " << rating << endl;
            }
        }
    }
    if (x == 3)
    {
        while (objectFile >> name >> yearPublished >> rating)
        {
            if (rating == 0)
            {
                cout << "Name: " << name << " yearPublished" << yearPublished << " Rating: " << rating << endl;
            }
        }
    }
    if (x == 4)
    {
        while (objectFile >> name >> yearPublished >> rating)
        {
            if (rating == 0)
            {
                cout << "Name: " << name << " yearPublished" << yearPublished << " Rating: " << rating << endl;
            }
        }
    }
}

// get whatTheyWant function
int getWhatTheyWant()
{
    cout << "1- Just Plan Chose Languages" << endl;
    cout << "2- CPP " << endl;
    cout << "3- JavaScript " << endl;
    cout << "4- PHP " << endl;
    cout << "5- Quit " << endl;

    int choice;
    cin >> choice;
    return choice;
}
using namespace std;
int main()
{
    int whatTheyWant;
    whatTheyWant = getWhatTheyWant();
    while (whatTheyWant != 5)
    {
        switch (whatTheyWant)
        {
        case 1:
            displayItems(1);
            break;
        case 2:
            displayItems(2);
            break;
        case 3:
            displayItems(3);
            break;
        case 4:
            displayItems(4);
            break;
        case 5:
            displayItems(5);
            break;
        default:
            cout << "Invalid choice" << endl;
        }
        whatTheyWant = getWhatTheyWant();
    }
    return 0;
}