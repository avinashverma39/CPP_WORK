#include <iostream>
#include <string>
using namespace std;
class parent
{
public:
    parent()
    {
        cout << "Ram Sir"; 
    }
};
class child : public parent
{
public:
    child()
    {
        cout << "\nAman";
    }
};
int main()
{
    system("cls");
    child e1;

    return 0;
}