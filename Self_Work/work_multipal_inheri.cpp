#include <iostream>
#include <string>
using namespace std;
class f1
{
public:
    void myfunction()
    {
        cout << "First Class\n";
    }
};
class f2 : public f1
{
public:
    void myfunction1()
    {     
        cout << "Second Class\n";
    }
};
class f3 : public f2
{
public:
    void myfunction3()
    {
        cout << "Third  Class\n";
    }
};

int main()
{
    system("cls");  
    f3 c1;
    c1.myfunction();
    c1.myfunction1();
    c1.myfunction3();

    return 0;
}