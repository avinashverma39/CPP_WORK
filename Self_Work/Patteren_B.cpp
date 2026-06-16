#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Number: ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (col == n - n || col == n/n || row == n - n || row == n / 2 || row == n - 1 || col == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}