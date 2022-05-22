#include <iostream>
using namespace std;
class SmartPhone
{
public:
    virtual void takeSelfie() = 0;
    virtual void makeCall() = 0;
};
class Android : public SmartPhone
{
public:
    void takeSelfie()
    {
        cout << "Android Selfie" << endl;
    }
    void makeCall()
    {
        cout << "Android Calling...." << endl;
    }
};

class Iphone : public SmartPhone
{
public:
    void takeSelfie()
    {
        cout << "Iphone Selfie" << endl;
    }
    void makeCall()
    {
        cout << "Iphone Calling...." << endl;
    }
};
int main()
{
    SmartPhone *s1 = new Android();
    s1->takeSelfie();
    s1->makeCall();
    SmartPhone *s2 = new Iphone();
    s2->takeSelfie();
    s2->makeCall();

    return 0;
}