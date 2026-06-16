#include <iostream>
#include <string>
using namespace std;
int add(int a, int b)
{
    cout << "Using function with two argument " << endl;
    return a + b;
}
int add(int a, int b, int c)
{
    cout << "Using function with three argument " << endl;

    return a + b + c;
}

// Calculate the value of a cylinder--->

int volume(double r, int h)
{ 
    return (3.14 * r * r * h);
}
// Calculate the value of a cube --->

int volume(int a)
{
    return a * a * a;
}
// Rectangular Box------>>
int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{
    cout << "The sum of 4 and 5 is " << add(4, 5) << endl;
    cout << "The sum of 4 and 5 and 8  is " << add(4, 5, 8) << endl;

    cout << "The volume of cuboid of 4, 7 and 6 is " << volume(4, 7, 6) << endl;
    cout << "The volume of cube of side 3  " << volume(3) << endl;
    cout << "The volume of cylinder of 4 and 6 is " << volume(4, 6) << endl;

    return 0;
}