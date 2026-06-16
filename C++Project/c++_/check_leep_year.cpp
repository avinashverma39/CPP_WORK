#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("cls");
    int year;
    cout << "Enter a Year:\n";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
    {
        cout << year << " is a leap year .";
    }
    else
    {
        cout << year << " is not a leap year .";
    }

    return 0;
}