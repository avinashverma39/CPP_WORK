#include <iostream>
using namespace std;
int main()
{
    int age;

    cout << "Enter Your Age:" << endl;
    cin >> age;
    char gender;
    cout << "Enter Your Gender:" << endl;
    cin >> gender;

    if (age >= 18)
    {
        if (gender == 'm')
        {
            cout << "Adult Male" << endl;
        }
        else
        {
            cout << "Adult Female" << endl;
        }
    }
    else
    {
        cout << "Minor";
    }

    return 0;
}