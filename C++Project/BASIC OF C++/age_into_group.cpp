#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter Your Age : ";
    cin >> age;

    if (age <= 13)
    {
        cout << "You are Child" << endl;
    }
    else if (age <= 19)
    {
        cout << "You are Teenager" << endl;
    }
    else if (age <= 59)
    {
        cout << "You are Adult" << endl;
    }
    else if (age >= 60)
    {
        cout << "You are Senior" << endl;
    }

    return 0;
}