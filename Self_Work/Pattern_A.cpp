#include <iostream>
#include <string>
using namespace std;

int main()
{
    for (int row = 1; row <= 7; row++)
    {
        for (int col = 1; col <= 7 - (row - 1); col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}