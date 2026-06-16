#include <iostream>
#include <string>
using namespace std;
#define PI 3.14159
int main()
{

    system("cls");
    cout << PI << endl;
    int n;
    cout << "Enter a number :";
    cin >> n;

    int arr[n];
    cout << "Enter the " << n << " Element of Array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {

            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    cout << "Total Even Number= "
         << even_count;
    cout << endl;
    cout << "Total Odd Number = "
         << odd_count;

    return 0;
}