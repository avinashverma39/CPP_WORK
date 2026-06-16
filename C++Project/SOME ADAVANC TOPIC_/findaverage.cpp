#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the value of num1 :";
    int num1;
    cin >> num1;
    cout << endl;

    cout << "enter the value of num2:";
    int num2;
    cin >> num2;
    cout << endl;

    cout << "Enter the value of num3:";
    int num3;
    cin >> num3;
    cout << endl;

    int average;
    average = (num1 + num2 + num3) / 3;
    cout << "the average of num1 num2 num3 :" << average << endl;
    return 0;
}
