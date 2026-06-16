// INPUT VALIDATION----------------------------->
#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("cls");
    float num;
    cout << "Enter a Float Number :" << endl;
    while (!(cin >> num))
    {
        cout << "Invalid Input! Try Again ";
        cin.clear();
        cin.ignore(100000, '\n');
    }
    cout << "You are  Entered " << num;
    return 0;
}