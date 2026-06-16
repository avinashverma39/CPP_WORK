
//   OOPS classes and objects--->>

// C++ ---> initilly called --> C with classes by SRROUSTROUP------------->

//  Class ---> extension of structures (in C)---------->
// Structures had limitations---
//   - members are public
//   -  No methods
// classes ---> structures + more
// classes ---> can have methods and properties
// classes -----> can make few members as private & few as public
// structures in C++ are typedefed
// classes ----> you can declare objects along with the class declaration
/*   class Employee{
     Class definition..

 } Aman,ram,atul,jeet;   */

// aman.salary = it make no sense if salary is private----....

#include <iostream>
#include <string>
using namespace std;

// NESTING OF MEMBER FUNTION----->
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void onse(void);
    void display(void);
};

void binary ::read(void)
{

    cout << "Enter a binary number : " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::onse(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {

            s.at(i) = '1';
        }
        else
        {

            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    cout << "Display your binary number " << endl;

    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.onse();
    b.display();
    b.display();
    return 0;
}