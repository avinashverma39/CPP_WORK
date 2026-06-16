#include <iostream>
#include <string>
using namespace std;
// Function prototype -------->

// int sum(int a, int b);--------> Acceptable
// int sum(int a, b);-----------> Not Acceptable
int sum(int, int);

int main()
{
    int num1, num2;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter the second number : ";
    cin >> num2;
    // num1 and num2 are actual parameters------->
    cout << "The sum is " << sum(num1, num2);
    return 0;
}
int sum(int a, int b)
{
    // a and b will be taking values from actual parameters num1 and num2----->>
    int c = a + b;
    return c;
}