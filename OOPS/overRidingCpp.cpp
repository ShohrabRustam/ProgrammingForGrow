#include <iostream>
using namespace std;

// base class
class parent_class
{
public:
    //   virtual function to calculate area of a 2D shape
    virtual void area(int side1, int side2)
    {
        // function definition
        cout << "Area is: " << (side1 * side2) << endl;
    }
};

// derived class inherited from parent class
class derived_class : public parent_class
{

public:
    // function to calculate area of a triangle
    void area(int side1, int side2)

    {
        // function definition  like formula (1/2 * base * height)
        cout << "Area is: " << (0.5 * side1 * side2) << endl;
    }
};

int main()

{

    // square and rectangle object form the parent class

    parent_class square, rectangle;

    derived_class triangle;

    // area() of base class is called

    square.area(2, 2);

    rectangle.area(4, 5);

    // area() of derived class is called

    triangle.area(4, 5);

    return 0;
}