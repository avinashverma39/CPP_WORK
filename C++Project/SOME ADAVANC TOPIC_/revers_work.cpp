#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("cls");
    string str;
    cout << "Enter a string ?\n";
    cin >> str;

    int length = str.length();

    for (int i = length - 1; i >= 0; i--)
    {
        cout << str[i]; 
    }
    cout << endl;

    return 0;
}