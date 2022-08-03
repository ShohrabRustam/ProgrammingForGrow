#include <iostream>

using namespace std;

class parent_class
{
public:
    // define overridden function
    void display_message()

    {

        cout << "I am the base class function." << endl;
    }
};

// define the derived class

class derived_class : public parent_class

{

public:
    // define overriding function

    void display_message()

    {

        cout << "I am the derived class function." << endl;
    }
};

int main()

{

    // create object of derived class

    derived_class obj;

    // call the overriding function

    obj.display_message();

    return 0;
}
