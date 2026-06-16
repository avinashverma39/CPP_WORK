#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int num1[] = {10, 20, 30, 40, 60, 89, 65, 76, 54, 56};
int f = sizeof(num1) / sizeof(num1[0]);
int findMaxium(int num1[], int size)
{
    int max = num1[0];

    for (int i = 0; i < size; i++)
    {
        if (num1[i] > max)
        {
            max = num1[i];
        }
    }
    return max;
}

int main()
{

    int value = findMaxium(num1, f);
    cout << "The maximum Valu is : " << value;

    return 0;
}