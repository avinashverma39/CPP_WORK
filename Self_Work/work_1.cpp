#include <iostream>
using namespace std;
int main()
{

    int a, b, temp;
    cout << "enter two number";
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;
    cout << "after change" << endl;
    cout << "A = " << a << "B =" << b << endl;

    return 0;
}