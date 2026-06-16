#include <iostream>
#include <string>
using namespace std;
void mycountry(string country = "India")
{
    cout << country << "\n";
}
int main()
{
    // mycountry("USA");
    // mycountry("China");
    // mycountry("Russia");
    mycountry();
    return 0;
}