#include <iostream>
using namespace std;

int main()
{
    int time = 20;
    //     if (time<18)
    // //     {
    //     cout<<"Good Day";
    //     }else
    //     {
    // cout<<"Good Evening";
    //     }
    string result = (time < 18) ? " Good Day " : "Good Evning";
    cout << result;

    return 0;
}