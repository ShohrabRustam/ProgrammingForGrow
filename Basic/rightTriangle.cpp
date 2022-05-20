#include<iostream>
using namespace std;

int main()
{
	int i = 1, j, rows;
    char symbol;
     
    cout << "Enter Row for right angle triangle = "<<endl;
    cin >> rows;

    cout << "Enter Symbol for Right Triangle Pattern = "<<endl;
    cin >> symbol;

    cout << "Right Angled Triangle  Pattern"<<endl; 

    while(i <= rows)
    {
        j = 1;
    	while(j <= i)
		{
            cout << symbol << " ";
            j++;
        }
        cout << "\n";
        i++;
    }		
 	return 0;
}