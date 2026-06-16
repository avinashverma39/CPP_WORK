#include <iostream>
#include <string>
using namespace std;
class Car
{
public:
    string Name;
    string Brand;
    int Year;
};
int main()
{
    Car a1, a2;
    a1.Name = "BMW";
    a1.Brand = "X10";
    a1.Year = 1091;
    cout << "Car Name is " << a1.Name << ",brand is " << a1.Brand << " and year is " << a1.Year << endl;
    a2.Name = "SWIFT";
    a2.Brand = "X100";
    a2.Year = 2001;
    cout << "Car Name is " << a2.Name << ",brand is " << a2.Brand << " and year is " << a2.Year << endl;

    return 0;
}