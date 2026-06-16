#include <iostream>
using namespace std;

int main()
{
    char grade;

    cout << "Enter Your  Grade (A, B, C, D, E, F) Big Latter :";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "Excellent! ";
        break;
    case 'B':
        cout << "Very Good ";
        break;
    case 'C':
        cout << "Good";
        break;
    case 'D':
        cout << "Better";
        break;
    case 'E':
    case 'F':
        cout << "Fail";
        break;

    default:
        cout << "Invalid Grade";
        break;
    }

    return 0;
}