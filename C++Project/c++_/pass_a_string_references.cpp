#include <iostream>
#include <string>
using namespace std;
void modiefyStr(string &str)
{ 
    str += " world";
}
int main()
{
    string greeting = " Hello";
    modiefyStr(greeting);
    cout << greeting;

    return 0;
}