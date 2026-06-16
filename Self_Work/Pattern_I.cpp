#include <iostream>
#include <string>
using namespace std;

int main()
{
    for (int row = 0; row < 7; row++)
    {
        for (int col = 0; col < 7; col++)
        {
            if (row == 0 || row == 6 || col == 7/2 )
            {
                cout << "* ";
            }else
            {
                cout<<"  ";
            }
            
        }
        cout << endl;
    }

    return 0;
}