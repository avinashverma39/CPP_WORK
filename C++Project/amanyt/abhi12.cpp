#include <iostream>
#include <string>
using namespace std;

int main()
{
    // What is Pointers?-------> data type which hold the addressof other data type.
    int a = 3;
    int *b = &a;
    // &-----> (Addres of) operator
    cout << "The adderes of a is " << &a << endl;
    cout << "The adderes of a is " << b << endl;
    // * -----> (value at) Dereferrence operator
    cout << "The value at adderes  b is " << *b << endl;

    // Pointer to Pointer---->
    int **c = &b;
    cout << "The Adderes of b is " << &b << endl;
    cout << "The Adderes of b is " << c << endl;
    cout << "The valu at  Adderes  c is " << *c << endl;
    cout << "The valu at  Adderes  value_at (value_at (c)) is " << **c << endl;

    return 0;
}