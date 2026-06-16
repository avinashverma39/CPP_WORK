// PARAMETERIZED AND DEFAULT CONSTRUCTORS ====================>
#include <iostream>
#include <string>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int , int); // Constructor Declaration ------------>
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};
complex ::complex(int x , int y) //----> This is a Parameterize constructor as it takes 2 parameter
{
    a = x;
    b = y;
}
int main()
{
    system("cls");

    // Implicit call----->
    complex a(4,6);

    // Explicit call----->
    complex b = complex(5,7);
  a.printNumber();
   b.printNumber();

    return 0;
}