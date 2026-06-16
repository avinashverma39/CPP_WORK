#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int x = 10;
    // auto show = [&x]()
    // {
    //     cout << x;
    // };
    // x = 12;
    // show();
    int x = 10;
    auto show = [&x]()
    {
        cout << x;
    };
    x = 12;
    show();
     
    return 0;
}
