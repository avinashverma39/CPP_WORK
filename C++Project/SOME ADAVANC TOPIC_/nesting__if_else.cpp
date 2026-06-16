#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter The Number: ";
    cin >> number;
    if (number >= 0)
    {
        cout << "The Number is positive " << endl;
        if (number % 2 == 0)
        {
            cout << "Even Number" << endl;
        }
        else
        {
            cout << "Odd Number " << endl;
        }
    }
    else if (number < 0)
    {
        cout << "The Number is Negative" << endl;
    }
    else
    {
        cout << "The Number Value is Zero ";
    }

    return 0;
}
