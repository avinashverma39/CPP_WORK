#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("cls");
    string name;
    do
    {
        cout << "Enter Your Name : ";
        cin >> name;
    } while (name.empty());
    cout << " Your Name is " << name;

    return 0;
}