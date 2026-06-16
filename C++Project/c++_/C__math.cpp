#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    cout << sqrt(64) << endl;
    cout << round(2.6) << endl;
    cout << log(2) << endl;
    cout << pow(2,3) << endl;
    cout << abs(-10) << endl;
    cout << ceil(4.3) << endl;
    cout << floor(4.7) << endl;
    cout << fmod(7.4,2.0) << endl;
    cout << log(2.718228) << endl;
    cout << log10(100) << endl;
    double degree = 90;
    double radian = degree * (M_PI / 180);
    cout << "sin(90):" << sin(radian) << endl;
    double angel = 0;

    cout << "cos(0):" << cos(angel) << endl;
    
    double angel = (M_PI/45);

    cout << "tan(45):" << tan(angel) << endl;
    
    return 0;
}