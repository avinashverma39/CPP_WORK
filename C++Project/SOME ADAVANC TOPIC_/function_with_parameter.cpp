#include <iostream>
#include <string>
using namespace std;
// void myFunction(string fName, int age)
// {
//     cout << fName << " refsnes\n"
//          << age << " years old";
// }
// int main()
// {
//     myFunction("Liam", 24);
//     myFunction("Jenny", 17);
//     myFunction("Anja", 16);
//     return 0;
void myFunction(string fName, int age)
{
    cout << fName << " refsnes "

         << age << " years old   ";
}
int main()
{
    myFunction("Liam", 24);
    myFunction("Jenny", 17);
    myFunction("Anja", 16);
    return 0;
}