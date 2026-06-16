#include <iostream>
#include <string>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// This will not swap condition in this code
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// Call by reference using pointers->
void swapPointers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by referenc  using C++ reference variables--->

void swapReferenceVor(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 4, b = 5;
    // cout << "The sum of 4 and 5 is " << sum(a, b);
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    // swap(a, b); // This will swap a and b
    //  swapepointer(&a , &b) this will swap a and b using pointer reference..
    swapReferenceVor(a, b); // this will swap a and b using pointer reference..
    // swapReferenceVor(a, b) = 754; // this will swap a and b using pointer reference..

    cout << "The value of a is " << a << " and the value of b is " << b << endl;

    return 0;
}