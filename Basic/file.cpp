#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    // object of the filestream
    ofstream ofsFile;
    ofsFile.open("rustam.txt");
    ofsFile << "I love Programming and programming Love me !" << endl;
        ofsFile << "I Love taking new Challenges and Learn from them !" << endl;

    ofsFile.close();
    return 0;
}