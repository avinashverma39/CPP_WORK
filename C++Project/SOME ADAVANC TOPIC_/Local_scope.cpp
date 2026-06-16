#include <iostream>
#include <string>
using namespace std;
// Local Variable------------->
// void myFunction()
// {
//     int x = 5;
//     cout << x;
// }

// Global Variable---------->

// int x = 5;
// void myFunction()
// {

//     cout << x;
// }

int x = 10;
void myFunction()
{
    int x = 34;
    cout << x;
}
int main()
{
    myFunction();
    cout << endl;
    cout << x;

    return 0;
}