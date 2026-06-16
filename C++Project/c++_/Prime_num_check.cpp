#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter The Number:";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)

            count++;
    }
    if (count <= 2)

        cout << "It is a prime Number. " << n << endl;
    else

        cout << "It is not a prime Number. " << n << endl;

    return 0;
}