#include <iostream>
#include <string>
using namespace std;
int doubleGame(int x)
{
    return x * 2;
}
int main()
{
    for (int i = 1; i < 5; i++)
    {
        cout << "Double of " << i << " is " << doubleGame(i) << endl;
    }

    return 0;  
}