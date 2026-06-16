#include <iostream>
using namespace std;

int main()
{
    // int size = 5;
    // for (int i = 1; i <= size; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout << " * ";
    //     }

    //     cout << endl;
    // }
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = i; j <= 5; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }
    // int row = 5;
    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= row - i; ++j)
    //     {
    //         cout << "  ";
    //     }
    //     for (int k = 1; k <= i; ++k)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }
    // for (int i = 1; i <= 10; i++)
    // {
    // for (int j = 1; j <= 10; j++)
    // {
    // if (j == 5 || i == 5)
    // {
    //     cout << "*";
    // }
    // else
    // {
    //     cout << " ";
    // }
    // cout<<j;
    // }
    // cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (j == 1 || i == 1 && j == 10 || i == 10)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
    }
    cout << endl;

    return 0;
}