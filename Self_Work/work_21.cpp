#include <iostream>
#include <string>
using namespace std;
int myFunction(int a)
{
    return 5 + a;
}
int mycode(int a, int b)
{
    return a + b;
}
// int maxValue(int a, int b)
// {
//     if (a > b)
//     {
//         return a;
//     }

//     else
//     {
//         return b;
//     }

// return (a > b) ? a : b;
//}
int main()
{
    cout << myFunction(3) << endl;

    int z = mycode(5, 5);
    cout << z;

    // cout << maxValue(23, 56);

    return 0;
}