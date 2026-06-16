// MULTILEVEL INHERITENC ------------------>
#include <iostream>
#include <string>
using namespace std;
class myClass
{
public:
    void myFunction()
    {
        cout << "Parent Class ";
    }
};
class myChild : public myClass
{
};
class grandChild : public myChild
{
};

int main()
{
    system("cls");
   grandChild c;
    c.myFunction();

    return 0;
}