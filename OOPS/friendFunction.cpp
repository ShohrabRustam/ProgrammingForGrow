#include <iostream>
using namespace std;

class EquilateralTriangle
{
private:
    float a;
    float circumference;
    float area;

public:
    void setA(float length)
    {
        a = length;
        circumference = a * 3;
        area = (1.73 * a * a) / 4;
    }


public:
    void PrintResult(EquilateralTriangle et)
    {
        cout <<"Length : " << et.a << endl;
        cout <<"Circumference : " << et.circumference << endl;
        cout <<"Area : " << et.area << endl;
    }
};

int main()
{
    EquilateralTriangle et;
    et.setA(3);
    // cout << "Length [side] of triangle : " << et.a << endl;
    // cout << "Circumference  of triangle : " << et.circumference<< endl;
    // cout << "area of triangle : " << et.area << endl;
    et.PrintResult(et);

    return 0;
}
