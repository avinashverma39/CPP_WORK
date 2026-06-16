#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int num2[10] = {20, 30, 40, 50, 60, 70, 80, 90, 100, 101};
    // for (int i = 9; i >= 0; i--)
    // {
    //     cout << num2[i] << endl;
    // }

    int value[5] = {910, 320, 630, 340, 550};
    int max = value[0];
    for (int i = 1; i < 5; i++)
    {
        if (value[i] > max)
        {
            max = value[i];
        }
    }
    cout << " Mzximum Value is " << max;

    return 0;
}