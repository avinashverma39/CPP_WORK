#include <iostream>
#include <string>
using namespace std;

int main()
{
    for (int row = 0; row <= 10; row++)
    {
        for (int col = 0; col <= 10; col++)
        {
            if (row == 0 || row == 5)
            {
                cout << "*";
            }
            else if (col == 0)
            {
                cout << "*";
            }

            else if (row == 11 - col && row == 1)
            {
                cout << "*";
            }

            else if (col == 10 && row == 2)
            {
                cout << "*";
            }

            else if (col == 10 && row == 3)
            {
                cout << "*";
            }

            else if (col == 10 && row == 4)
            {
                cout << "*";
            }

            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}