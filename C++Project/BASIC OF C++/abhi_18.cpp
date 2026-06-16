#include <iostream>  
#include <string>
using namespace std;

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}
int facrtorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * facrtorial(n - 1);
}

// factorial(4) = 4 * facrtorial(3);
// factorial(4) = 4 * 3 * facrtorial(2);
// factorial(4) = 4 * 3 * 2 facrtorial(1);
// factorial(4) = 4 * 3 * 2 * 1 facrtorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
int main()
{
    // Factroil of a number--->>
    //  !6 = 6*5*4*3*2*1
    // 0! = 1 by defintion
    // 1! = 1 by defintion
    // n! = n * (n-1)

    int a;
    cout << "Enter the number : " << endl;
    cin >> a;
    // cout << "Enter factorial of " << a << " is = " << facrtorial(a) << endl;
    cout << "The term in fibonacci sequence at position " << a << " is = " << fib(a) << endl;
    return 0;
}