#include <iostream>
#include <list>
using namespace std;
class YoutubeChannel
{
    string name;
    string ownerName;
    int subscriberCount = 0;
    list<string> videos;

public:
    YoutubeChannel(string name, string ownerName)
    {
        this->name = name;
        this->ownerName = ownerName;
    }
    void setpublishVideo(string title)
    {
        videos.push_back(title);
    }

    void getpublishVideo()
    {
        cout << "Your Hobbies is " << videos.size() << endl;
        for (string video : videos)
        {
            cout << video << "    ";
        }
        cout << endl;
    }

    void getInfo()
    {

        cout << endl;
        cout << "Name : " << name << "OwnerName :  " << ownerName << " Suscribers : " << subscriberCount << endl;
    }

    void susbscribe()
    {
        this->subscriberCount++;
    }

    void unsubscribe()
    {
        if (this->subscriberCount > 0)
            this->subscriberCount++;
    }
};
class EducationYoutubeChannel : public YoutubeChannel
{
public:
    EducationYoutubeChannel(string name, string ownerName) : YoutubeChannel(name, ownerName)
    {
    }

    void desc()
    {
        cout << "EducationYoutubeChannel is help to the students for improved learning skills " << endl;
    }
};
int main()
{
    YoutubeChannel y("Learn skills", "Rustam");
    y.setpublishVideo("Learning Part1");
    y.setpublishVideo("Learning Part2");
    y.setpublishVideo("Learning Part3");
    y.setpublishVideo("Learninf Part4");
    y.susbscribe();
    y.susbscribe();
    y.susbscribe();
    y.getInfo();
    cout <<  endl;
    cout << "EducationYoutubeChannel details" << endl;
    EducationYoutubeChannel e("C++ EducationYoutubeChannel ","Rustam");
    e.setpublishVideo("Class and Object");
    e.setpublishVideo("Link List");
    e.susbscribe();
    e.getInfo();
    e.desc();
}