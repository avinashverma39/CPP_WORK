#include <iostream>
#include <string>
using namespace std;
class c2;
class c1
{
    int Val1;
    friend void exchange(c1 &, c2 &);

public:
    void inData(int a)
    {
        Val1 = a;
    }
    void display(void)
    {
        cout << Val1 << endl;
    }
};

class c2  
{
    int Val2;
    friend void exchange(c1 &, c2 &);

public:
    void inData(int a)
    {
        Val2 = a;
    }
    void display(void)
    {
        cout << Val2 << endl;
    }
};

/*
Trick Swap Value 

temp = a;
a = b;
b = temp;
*/

void exchange(c1 &X, c2 &Y)
{
 
    int temp = X.Val1;
    X.Val1 = Y.Val2;
    Y.Val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.inData(34);
    oc2.inData(56);

    exchange(oc1, oc2);
    cout << "The Value of c1 After exchanging Becomes : ";
    oc1.display();
    cout << "The Value of c2 After exchanging Becomes : ";
    oc2.display();

    return 0;
}