#include <iostream>
#include <string>
using namespace std;
int add(int a, int b)
{
    return a + b;
}

int main()
{
    auto add = [](int a, int b)
    {
        return a + b;
    };

    cout << add(3, 5);

    return 0;
}