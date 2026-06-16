#include <iostream>
#include <string>
using namespace std;
struct car
{
    string Brand;
    string Model;
    int Year;
};
void myFunction(car C)
{
    cout << "Brand" << C.Brand << endl
         << "Model" << C.Model << endl
         << "Year " << C.Year;
}
int main()
{
    car myCar = {" BMW", " X2", 1999};
    myFunction(myCar);


    return 0;
}