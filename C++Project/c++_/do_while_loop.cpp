#include <iostream>
using namespace std;

int main()
{
    // int i = 10;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i <= 5);
    int num5;
    do
    {
        cout << "Enter The Number :  ";
        cin >> num5;
        if (num5 <= 0)
        {
            cout << "This is not a positiv Number " << endl;
        }

    } while (num5 <= 0);
    cout << "You  enter the positive number = " << num5 << endl;
    return 0;
}