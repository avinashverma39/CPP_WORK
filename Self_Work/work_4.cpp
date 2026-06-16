#include <iostream>
using namespace std;

int main()
{
    char operation;
    double num1;  
    double num2;
    cout << "Enter the two Numbers :  ";
    cin >> num1 >> num2;
    cout << "Enter an oprator (+, -, *, /) :";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "Result  " << num1 + num2;
        break;
    case '-':
        cout << "Result " << num1 - num2;
        break;
    case '*':
        cout << "Result " << num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "Result " << num1 / num2;
        }
        else
        {
            cout << "You Can not Divide by 0 ";
        }
        break;

    default:
        cout << "Invalid Oprator";
        break;
    }

    return 0;
}