#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 15;
    cout << "before swapping : A = " << a << " B = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "after swapping : A = " << a << " B = " << b << endl;

    return 0;
}
