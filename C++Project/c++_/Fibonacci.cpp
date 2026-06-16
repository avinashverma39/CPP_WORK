#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num, a1 = 0, a2 = 1, nextLine;

    cout << "Enter the number : ";
    cin >> num;

    for (int i = 1; i <= num; ++i)
    {

        cout << num << " ";
        nextLine = a1 + a2;
        a1 = a2;
        a2 = nextLine;
    }

    return 0;
} 