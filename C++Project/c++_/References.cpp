#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string food = "Pizza";
    // string &meal = food;
    // cout << food << endl
    //      << meal << endl;
    // string code = "Pizza";
    // cout << &code << endl;

    // for (int i = 0; i < 5; ++i)
    // {
    //     char letter = 'A' + i;
    //     int num = i + 1;
    //     cout << letter << num << endl;
    //}

    for (int i = 0; i < 5; ++i)
    {
        int num = i + 1;
        char letter = 'A' + i;
        cout << letter << num << endl;
    }

    return 0;
}