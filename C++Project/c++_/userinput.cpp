#include <iostream>
using namespace std;
int main()
{
    cout << "enter the first number";
    int num1;
    cin >> num1;
    cout << endl;

    cout << " enter the second number";
    int num2;
    cin >> num2;
    cout << endl;

    int result;
    result = num1 + num2;
    cout << "sum is:" << result << endl;

    result = num1 - num2;
    cout << "subtraction is:" << result << endl;

    result = num1 * num2;
    cout << "multiply is:" << result << endl;

    cout << "division is:" << (float)num1 / num2 << endl;

    result = num1 % num2;
    cout << "modules is:" << result << endl;

    return 0;
}