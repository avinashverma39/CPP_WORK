#include <iostream>
#include <string>
using namespace std;
int sum(int n)
{
    if (n > 0)
    {
        return n + sum(n - 1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    cout << sum(10);
    return 0;
}