#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("cls");
    string name;
    int age;
    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your age:\n";
    cin >> age;

    cout << " Hi"<<" " << name << "! " << "You will turn" << " " << age + 1 << " Next Year.";

    return 0;
} 