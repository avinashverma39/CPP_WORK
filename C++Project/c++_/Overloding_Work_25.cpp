#include <iostream>
#include <string>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
float add1(float a, float b)
{
    return a + b;
}    
int add(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    int sr = add(2, 6);
    cout << sr << endl;
    float ms = add1(2.5656, 6.44432);
    cout << ms << endl;
    float mr = add(2, 4, 5);
    cout << mr << endl;

    return 0;
}