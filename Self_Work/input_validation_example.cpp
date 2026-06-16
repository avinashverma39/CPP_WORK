#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("cls");
    char Alpha;
    cout << "Enter 'N' or 'Y' :" << endl;
    while (!(cin >> Alpha) || (Alpha != 'Y' && Alpha != 'N'))
    {
        cout << "Invalid Please Enter 'Y','N' : ";
        cin.clear();
        cin.ignore(100000, '\n');
    }
    cout << "You Entered " << Alpha;
    return 0;
}