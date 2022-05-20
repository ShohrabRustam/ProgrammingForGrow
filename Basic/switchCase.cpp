#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char opeartion;
    cout << "Calculator using the switch statement " << endl;
    cout << "Enter the first number " << endl;
    cin >> num1;
    cout << "Enter the operator " << endl;
    cin >> opeartion;
    cout << "Enter the second number " << endl;
    cin >> num2;

    switch (opeartion)
    {
    case '-':
        cout << num1 << opeartion << num2 << "= " << num1 - num2 << endl;
        break;
    case '+':
        cout << num1 << opeartion << num2 << "= " << num1 + num2 << endl;
        break;
    case '*':
        cout << num1 << opeartion << num2 << "= " << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 << opeartion << num2 << "= " << num1 / num2 << endl;
        break;
    case '%':
        bool isNum1Int, isNum2Int;
        isNum1Int = ((int)num1 == num1);
        isNum2Int = ((int)num1 == num1);
        if (isNum1Int && isNum2Int)
        {
            cout << num1 << opeartion << num2 << " = " << (int)num1 % (int)num2 << endl;
        }
        else
        {
            cout << "Invalid Input " << endl;
        }
        break;
    default:
        cout << "Operation is Invalid " << endl;
    }
    return 0;
}