#include <iostream>
#include <string>
using namespace std;

int main()
{
    auto add = [](int x, int y)
    {
        return x + y;
    };
    cout << add(4, 6);
    
    return 0;
}