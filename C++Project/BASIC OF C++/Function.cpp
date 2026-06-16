// Function overloading in C++

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}

void add(int a, int b)
{
    cout << "Sum of " << a << " and " << b << " is: " << a + b << endl;
}

void add(int a, int b, int c)
{
    cout << "Sum of " << a << ", " << b << " and " << c << " is: " << a + b + c << endl;
}

int main()
{
    int sum_1 = sum(10, 20);
    int sum_2 = sum(10, 20, 30);
    cout << "Sum of 10 and 20 is: " << sum_1 << endl;
    cout << "Sum of 10, 20 and 30 is: " << sum_2 << endl;

    add(10, 20);
    add(10, 20, 30);

    return 0;
}