#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string fullname;
    // cout << "Type your full name : ";
    // getline(cin, fullname);
    // cout << "Your Name is : " << fullname;
    string str1, str2;
    cout << "Enter the first string : ";
    cin >> str1;
    cout << "Enter the second string : ";
    cin >> str2;
    if (str1 == str2)
    {
        cout << "Both String are Same ";
    }
    else
    {
        cout << "Both String are Not Same ";
    }

    return 0;
}