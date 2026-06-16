#include <iostream>
#include <string>
using namespace std;
class Product
{
public:
    string Company;
    Product()
    {
        Company = "Apple";
    }
};
int main()
{
    system("cls");
    Product Iphone;
    cout << Iphone.Company;

    return 0;
}