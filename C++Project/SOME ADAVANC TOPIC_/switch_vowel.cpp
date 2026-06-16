#include <iostream>
using namespace std;
int main()
{
    char latter;
    cout << "Enter a lower case latter : ";
    cin >> latter;

    switch (latter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << latter << " Is a vowel" << endl;
        break;

    default:
        if (latter >= 'a' && latter <= 'z')
        {
            cout << "Is a consounent ";
        }
        else if (latter >= '0' && latter <= '9')
        {
            cout << "It is a Digit ";
        }

        else
        {
            cout << "Invilad Latter ";
        }
    }

    return 0;
}