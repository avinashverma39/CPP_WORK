#include <iostream>
#include <string>
using namespace std;
class A
{
private:
    int secret = 132;

    friend class B;
};
class B
{
public:
    void reveal(A a)
    {
        cout << "Access secret :" << a.secret;
    }
};
int main()
{
    system("cls");
    A a1;
    B b1;
    b1.reveal(a1);

    return 0;
}