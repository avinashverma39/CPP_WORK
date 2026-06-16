#include <iostream>
#include <string>
using namespace std;

int main()
{
    for (int row = 0; row <= 10; row++)
    {
        for (int col = 0; col <= 10; col++)
        {
            if (row == 0 || row == 10)
            {
                cout << "*";
            }
            else if (col == 0 || col == 10)
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