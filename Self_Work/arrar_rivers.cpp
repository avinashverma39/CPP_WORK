// Array Rivers in user input------------------->
#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("cls");
    int n;
    cout << "Enter of array number:";
    cin >> n;

    int value[n];
    cout << "Enter the " << n << "Element of Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << value[i] << " ";
        cout << endl;

    }

    return 0;
}