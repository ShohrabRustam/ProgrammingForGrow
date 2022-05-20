#include <iostream>
using namespace std;
int main()
{
    // print the ractangle shapes
    int row;
    int col;
    cout << "Enter the number of rows of the ractangle you want to print " << endl;
    cin >> row;
    cout << "Enter the number of columns of the ractangle you want to print " << endl;
    cin >> col;
    // cout<<c<<"  "<<r;
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i = j || i == row || j == 0 || j == col || j == row || i == col)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        count++;
        if (count > 10){
            break;
        }
    }
    return 0;
}