#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num[] = {10, 11, 23, 44, 56, 67, 78, 36, 58};
    int l = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < l; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Even Number " << num[i] << endl;
        }
        else
        {
            cout << "Odd Number " << num[i] << endl;
        }
    }

    return 0;
}