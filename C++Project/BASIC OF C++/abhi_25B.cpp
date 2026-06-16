#include <iostream>
#include <string>
using namespace std;
class complax
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(complax o1, complax o2)
    {

        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNumber()
    {

        cout << "Your complax Number is " << a << "+" << b <<"i" <<endl;
    }
};

int main()
{
    complax c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}