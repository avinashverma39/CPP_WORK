#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("cls");
    int x, y, z;
    cout << "Enter the three number :\n";
    cin >> x >> y >> z;
    int max;
    if (x >= y && x >= z)
    {
        max = x;
    }
    else if (y >= x && y >= z)
    {
        max = y;
    }
    else
    { 
        max = z;
    }
    cout << "Max value is : " << max;
    return 0;
}