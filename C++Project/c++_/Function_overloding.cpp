#include <iostream>
#include <string>
using namespace std;
int myFunction(int x, int y)
{
    return x + y;
}
double myFunction1(double x, double y)
{
    return x + y;
}
int main()
{
    int result = myFunction(2, 4);
    cout << result << endl;

    double result1 = myFunction1(2.4, 4.8);
    cout << result1 << endl;

    return 0;
} 