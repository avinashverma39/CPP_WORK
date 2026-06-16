#include <iostream>
#include <string>
using namespace std;
class Product
{
public:
    string Company;
    int Variant;

    Product(int var)
    {
        Company = "Iphone";
        Variant = var;
    }
};
int main()
{
    system("cls");
    Product Iphone(16);
    cout << Iphone.Company << " "
         << Iphone.Variant;

    return 0;
}