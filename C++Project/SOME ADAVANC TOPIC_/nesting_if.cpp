#include <iostream>
using namespace std;
int main()
{
    int age;

    cout << "Enter your age" << endl;
    cin >> age;
    char Gender;
    cout << "Enter Your Gender" << endl;
    cin >> Gender;
    if (age >= 18)
    {
        if (Gender == 'm')
        {
            cout << "Adult male" << endl;
        }
        else
        {
            cout << "Adult Female" << endl;
        }
    }

    else
    {
        cout << "minor";
    }

    return 0;
}