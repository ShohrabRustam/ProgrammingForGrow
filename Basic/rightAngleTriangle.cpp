#include<iostream>
using namespace std;
int main(){
    int i, j, rows;
    char symbol = '*';
    cout << "\n\n Display the pattern like right angle triangle with right justified using digits:\n";
    cout << "-------------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= rows - i; j++) 
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++) 
        {
            cout << symbol;
        }
        cout << endl;
    }

return 0;
}