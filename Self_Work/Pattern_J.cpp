
#include <iostream>
using namespace std;

int main()
{
    for (int row = 0; row < 7; row++)
    {
        for (int col = 0; col < 7; col++)
        {
            if (row == 0)
            {
                cout << "*";
            }

            else if (col == 4)
            {
                cout << "* ";
            }
            else if (row == 5 && col == 0)
            {
                cout << "*";
            }
            else if (row == 6 && col == 2)
            {
                cout << "*";
            }
            else if (row == 6 && col == 0)
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