#include <iostream>
#include <string>
using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1) // Base Case----->
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1); //Recursive Call-------->
    }
}
int main()
{
    cout << factorial(5);
    
    return 0;
} 