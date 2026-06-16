#include <iostream>
#include <string>
using namespace std;

class complex
{
    int a, b;

public:
    // Creatin a Constructor---------------->
    // Constroctor is a spical member function with same name as of the class .
    // It is used to initializ the object of its class.......
    // it is automtically invoked.....whenever object is created....

    complex(void); // Constructor Declaration ------------>
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(void) //----> This is a default constructor as it takes no parameter
{
    a = 10;
    b = 0;
}
int main()
{
    complex c;
    c.printNumber();
    return 0;
}

// PROPRITES OF CONSTRUCTOR ------------------>

/* 1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They can not return value and do not have return types.abort
4. It can have defult arguments.abort.
5. We can not refered to there address .
*/