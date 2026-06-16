#include <iostream>
#include <string>
using namespace std;
// void myFunction()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Hello World" << endl;
//     }
// }
// int main()
// {
//     myFunction();
//     return 0;
// }

// int area(int width, int height = 10)
// {
//     return height * width;
// }
// int main()
// {
//     cout << "Area With Default Value : " << area(4) << endl;
//     cout << "Area With Costum Value : " << area(4, 6) << endl;
// }

// int multiplay(int x, int b)
// {
//     return x * b;
// }
// float multiplay1(float x, float b)
// {
//     return x * b;
// }
// int multiplay(int x)
// {
//     return x;
// }

int sum(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()

{
    int factorial = sum(6);
    cout << factorial;
    // cout << multiplay(2, 4) << endl;
    // cout << multiplay1(2.67, 4.6456) << endl;
    // cout << multiplay(3) << endl;
    return 0;
}
