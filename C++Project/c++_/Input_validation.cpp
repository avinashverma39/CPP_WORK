// INPUT VALIDATION----------------------------->
#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("cls");
    int number;
    cout << "Enter The Number :" << endl;
    while (!(cin >> number))
    {
        cout << "Invalid Input! Try Again ";
        cin.clear();
        cin.ignore(100000, '\n');
    }
    cout << "You are  Entered " << number;
    return 0;
}