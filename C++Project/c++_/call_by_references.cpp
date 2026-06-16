#include <iostream>
#include <string>
using namespace std;
int modiefy(int &x)
{
    x = x + 10;
    return x;
}
int main()
{
    int num = 15;
    cout << modiefy(num) << endl;
    cout << num;
    return 0;
}