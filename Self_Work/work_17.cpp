#include <iostream>
#include <string>
using namespace std;
int sum(int num1, int num2)
{
    int c = num1 + num2;
    return c;
}
int main()
{
    int num1, num2;
    cout << "Enter The First Number: ";
    cin >> num1;
    cout << "Enter The Second Number: ";
    cin >> num2;
    cout << "Sum is " << sum(num1, num2);
    return 0;
}