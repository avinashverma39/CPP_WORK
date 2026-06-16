#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int num2[5] = {12, 45, 23, 67, 34};
    // int max = num2[0];
    // for (int i = 1; i < 5; i++)
    // {
    //     if (num2[i] > max)
    //     {
    //         max = num2[i];
    //     }
    // }
    // cout << max;

    // FOR EACH LOOP------------>
    int num[5] = {10, 20, 30, 40, 50};
    for (int i : num)
    {
        cout << i << endl;
    }
    string cars[5] = {"SWIFT", "BMW", "KN", "VOLVO", "THAR"};
    for (string car : cars)
    {
        cout << car << endl;
    }
    // ARRAY SIZE------>
    int number[] = {10, 20, 30, 40, 50, 19, 30, 50, 59, 29, 11, 45, 40, 53};
    // cout << sizeof(number);
    int getArrayLength = sizeof(number) / sizeof(number[0]);
    cout << getArrayLength << endl;
    for (int i = 0; i < getArrayLength; i++)
    {
        cout << number[i] << " ";
    } 

    return 0;
}