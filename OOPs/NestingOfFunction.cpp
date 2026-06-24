#include <iostream>
#include <string>
using namespace std;

// Nesting of function using classes and object

class binary
{

    string s; // By default Private
    void chk_bin(void);

public:
    void read(void);
    void onescom(void);
    void display(void);
};

void binary ::read(void) // Member Function to get the number from user
{
    cout << "Enter binary Number: ";
    cin >> s; // taking
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {

            cout << "Incorrect Binary Number" << endl;
            exit(0);
        }
    }
}

void binary ::onescom(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        chk_bin(); // Nesting of function in  another function

        if (s.at(i) == '1')
        {

            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}
void binary ::display(void)
{
    cout << "Displying Binary Number" << endl;
    for (int i = 0; i < s.length(); i++)
    {

        cout << s.at(i);
    }

    cout << endl;
}
int main()
{
    system("cls");

    binary num;
    num.read();
    num.onescom();
    // num.chk_bin();
    num.display();

    return 0;
}