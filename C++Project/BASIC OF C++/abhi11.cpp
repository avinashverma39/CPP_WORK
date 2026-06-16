#include <iostream>
#include <string>
using namespace std;

int main()
{
    //     for (int i = 1; i <= 8; i++)
    //     {
    //         if (i == 3)
    //         {
    //             break;
    //         }
    //         cout << i << endl;
    //     }
    for (int i = 1; i <= 8; i++)
    {

        if (i == 3)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}