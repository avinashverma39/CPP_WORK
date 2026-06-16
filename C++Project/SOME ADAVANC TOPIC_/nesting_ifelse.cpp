#include <iostream>
using namespace std;
int main()
{
    int Number;
    cout << "Enter the Number";
    cin >> Number;
    if (Number >= 0)
    {
        cout << "The Number is Positive " << endl;
        if (Number % 2 == 0)
        {
            cout << "Even Number" << endl;
        }
        else
        {
            cout << "Odd Number" << endl;
        }
    }
    else if (Number < 0)
    {
        cout << "The number is Negative" << endl;
    }
    else if (Number < 0)
    {
    }
    else
    {
        cout << "The Number is Zero" << endl;
    }

    return 0;
}