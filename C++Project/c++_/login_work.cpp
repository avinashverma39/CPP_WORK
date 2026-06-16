#include <iostream>
#include <string>
using namespace std;
int main()
{
    string username = "Shivam";
    string password = "1234";
    string inputUser, inputPassword;
    cout << " Enter Username :  ";
    cin >> inputUser;
    cout << "Enter the Password : ";
    cin >> inputPassword;
    if (inputUser == username && inputPassword == password)
    {
        cout << "you are login successfully" << endl;
    }
    else
    {
        cout << "Username or password is incorrect";
    }
    return 0;
}