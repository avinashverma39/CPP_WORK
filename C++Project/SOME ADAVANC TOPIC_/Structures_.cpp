#include <iostream>
#include <string>
using namespace std;
struct car
{
    string Brand;
    string Model;
    int Year;
};
int main()
{

    // struct
    // {
    //     int myNum;
    //     string myString;

    // } myStructurs;
    // myStructurs.myNum = 23;
    // myStructurs.myString = "Hello Sir";
    // cout << myStructurs.myNum << endl;
    // cout << myStructurs.myString;

    // struct
    // {
    //     string Brand;
    //     string Model;
    //     int Year;

    // } myCar1, myCar2, myCar3;
    // myCar1.Brand = "BMW";
    // myCar1.Model = "X5";
    // myCar1.Year = 1999;

    // myCar2.Brand = "Ford";
    // myCar2.Model = "Y10";
    // myCar2.Year = 1920;

    // myCar3.Brand = "Range Rover";
    // myCar3.Model = "X310";
    // myCar3.Year = 1998;

    // cout << "Brand Name is " << myCar1.Brand << " Model Number " << myCar1.Model << " Since " << myCar1.Year << endl;
    // cout << "Brand Name is " << myCar2.Brand << " Model Number " << myCar2.Model << " Since " << myCar2.Year << endl;
    // cout << "Brand Name is " << myCar3.Brand << " Model Number " << myCar3.Model << " Since " << myCar3.Year << endl;

    car myCar1;
    myCar1.Brand = "BMW";
    myCar1.Model = "X5";
    myCar1.Year = 2001;

    car myCar2;
    myCar2.Brand = "FORD";
    myCar2.Model = "Y10S";
    myCar2.Year = 1998;

    cout << "Brand Name is " << myCar1.Brand << " Model Number " << myCar1.Model << " Since " << myCar1.Year << endl;
    cout << "Brand Name is " << myCar2.Brand << " Model Number " << myCar2.Model << " Since " << myCar2.Year << endl;

    return 0;
}