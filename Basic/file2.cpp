#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file("file.txt");
    // write your code here
    // file.write("Something happened Here !! We are going to to write inside the file");
    if (file.is_open())
    {
        cout << "The file is open" << endl;
    }
    else
    {
        cout << "The file you meassed up " << endl;
    }
    file << "Something happened Here !! We are going to to write inside the file " << endl;
    file.close();
    return 0;
}