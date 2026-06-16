#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch = 'A';
    while (ch <= 'Z')
    {
        cout << "*****" << endl;

        cout << "* " << ch << " *" << endl;

        cout << "*****" << endl;
        cout << endl;

        ch++;
    }

    return 0;
}