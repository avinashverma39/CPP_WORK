#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1;
    cout << "Enter The Number : ";
    cin >> n;

    for (int i = 1; i <= n; i = i++)
    {
        fact *= i; // fact=fact*i;
    }
    cout << fact;

    return 0;
}