#include <iostream>
#include <string>
using namespace std;

class complex
{
    int a, b;
    friend complex sumcomplex(complex o1, complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // Below lines means that non member functionb sumcomplex function is allowed to do anything with my private parts---->

    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumcomplex(c1, c2);
    sum.printNumber();

    return 0;
}

/* PROPERTIES OF FRIEND FUNCTION -------------->
 1. Not in the scope of class
 2. since it is not in the scope of the class, it cannot be called the object of that class . c1.sumcomplex() == Invalid;
 3. Can be invoked without the help of any object-->
 4. Usually contans the arguments as objects----->
 5. can be declared inside public or private section of the class ----->
 6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/
