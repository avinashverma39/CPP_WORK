#include <iostream>
#include <string>
using namespace std;

int main()
{
    // auto add = [](int a, int b)
    // {
    //     return a + b;
    // };
    // cout << add(3, 4);
    auto str = []()
    {
        cout << "Hello World";
    };
    str();
    return 0;
}
