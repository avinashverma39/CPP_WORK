#include <iostream>
#include <string>
using namespace std;
int main()
{
    string username = "avinashverma";
    string pasword = "1234";
    string inputUser, inputPass;
    cout << "Enter Username :  " << endl;
    cin >> inputUser;
    cout << "Enter Your Password : " << endl;
    cin >> inputPass;

    if (inputUser == username && pasword == inputPass)
    {
        cout << "You are login successfuly" << endl;
    }
    else
    {
        cout << "Username or Password is incorrect ";
    }

    return 0;
}