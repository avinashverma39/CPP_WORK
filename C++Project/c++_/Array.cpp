#include <iostream>
using namespace std;

int main()
{
    string cars[] = {"SWIFT", "VOLVO", "BMW", "FORD"};
    int num[7] = {
        20,
        30,
        40,
        50,
        60,
        70,
        80,
    };
    //    cars[1] = "THAR";
    //    cars[1] = "KN";
    //     cout << cars[1] << endl;
    // num[1] = 90;
    // cout << num[1];
    for (int i = 0; i <= 3; i++)
    {
        cout << "Here is the Value of cars " << i << " and cars name is  " << cars[i] << endl;
    }
    cout << endl;
    for (int i = 0; i <= 6; i++)
    {
        cout << "Here is the Value of Number " << i << " and numbers value is  " << num[i] << endl;
    }

    return 0;
}