#include <iostream>
#include <string>
using namespace std;
int a, b, c;
void noSwap(void)
{
    cout << "Enter the two number : ";
    cin >> a >> b;
    cout << "Without Swaping Value : " << a << " " << b << endl;
}

void swap(void)
{
    c = a;
    a = b;
    b = c;
    cout << "After Swaping Value : " << a << " " << b << endl;
}

int main()
{
    // Without Swaping value ----
    noSwap();
    //After Swaping Value
    swap();
    return 0;
}