#include <iostream>
#include <string>
using namespace std;

int main()
{

    int arrNum[] = {10, -20, -30, -40, 50, -10, -20, -30, -40, -50};
    int r = sizeof(arrNum) / sizeof(arrNum[0]);

    int positive = 0;
    int negativ = 0;
    for (int i = 0; i < r; i++)
    {
        if (arrNum[i] > 0)
        {
            positive++;
        }
        else if (arrNum[i] < 0)
        {
            negativ++;
        }
    }
    cout << "Postive Value Is : " << positive << endl
         << "Negative Value Is :" << negativ << endl;

    return 0;
}