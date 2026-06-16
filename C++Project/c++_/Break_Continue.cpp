#include <iostream>
#include <string>
using namespace std;

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i << endl;
        cout << endl;
    }
    for (int i = 0; i <= 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        cout << i << endl;
    }
    int r = 0;
    while (r <= 10)
    {
        cout << r << endl;
        r++;

        if (r == 4)
        {
            break;
        }
    }
    int r = 0;
    while (r <= 10)
    {
        cout << r << endl;
        r++;

        if (r == 4)
        {
            continue;
        }
    }
    do
    {
        if (r == 4)
        {
            break;
        }
        cout << r << endl;
        r++;

    } while (r <= 10);

    return 0;
}