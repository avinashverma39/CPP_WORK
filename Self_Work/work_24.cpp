#include <iostream>
#include <string>
using namespace std;

int main()
{
    /** int num;
     for (int i = 0; i < 5; i++)
     {
         for (int j = 0; j < i; j++)
         {
             cout << i;
             cout << " ";
         }

         cout << endl;
     }*/

    // int num = 1;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << num;
    //         cout << " ";
    //         num++;
    //     }

    //     cout << endl;
    // }

    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "*";
        }
        cout << endl;
        // cout<<" ";
        // cout << "AMAN";
    }

    cout << endl;
    return 0;
}