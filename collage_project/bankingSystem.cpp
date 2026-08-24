#include <iostream>
#include <string>
using namespace std;

class loginSystem
{

private:
    int AcNumber;
    string Name;
    int loginPass;
    string gmail;

public:
    int password;
    int getAcNumber() { return AcNumber; }
    void setData()
    {
        cout << "Enter Your gmail: " << endl;
        cin >> gmail;

        cout << "Enter Your Passoword: " << endl;
        cin >> password;
    }
    ` void getData()

    {

        if (password == '1234')
        {
            cout << "Your gmail is : " << gmail << endl;
        }
        cout << "Your Password is : " << loginPass;
    }
};

int main()
{
    system("cls");

    return 0;
}