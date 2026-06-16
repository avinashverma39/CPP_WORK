#include <iostream>
#include <string>
using namespace std;

int main()
{

    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 10; col++)
        {

            if (col == 0 || col == 9)
            {
                cout << "*";
            }
            else if (row == col - 1 && row <= 5 / 2)
            {
                cout << "*";
            }

            else if (row == col - 1 && col == 4)
            {
                cout << "*";
            }

            else if (col == (10 - row - 2) && row <= 5 / 2)
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