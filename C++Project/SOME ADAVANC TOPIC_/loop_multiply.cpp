#include <iostream>
using namespace std;

int main()
{
    int num1;
    cout << "Enter The Number : ";
    cin >> num1;

    for (int i = 1; i <= 10; i++)
    {
        cout << num1 << " X " << i << " = " << num1 * i << endl;
    }

    return 0;
} 