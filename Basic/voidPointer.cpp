#include <iostream>
using namespace std;
void printNumber(int *number)
{
    cout <<"Print the number using the void function pointer : "<< *number << endl;
}
void printLetter(char *letter){
    cout <<"Print the letter using the void function pointer : "<< *letter << endl;
}

void print(void *ptr, char type){
    switch(type){
        case 'i':
        cout <<*((int*)ptr) << endl;
        break;
        case 'c':
        cout <<*((int*)ptr) << endl;
        break;
        default: 
        cout <<"Something went wrong"<<endl;
    
    }
}

int main()
{
    int number;
    cout << "Enter Number" << endl;
    cin >> number;
    printNumber(&number);
    char letter = 'a';
    printLetter(&letter);
    print(&number,'i');
    cout <<endl;
    print(&letter,'c');
    return 0;
}