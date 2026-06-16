#include <iostream>
#include <string>
using namespace std;

// Forward Declaration ---->
class complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumRealcomplex(complex, complex);
    int sumCompcomplex(complex, complex);
};
class complex
{
    int a, b;
    // Individually declaration Functions as friend

    // friend int Calculator ::sumRealcomplex(complex o1, complex o2);
    // friend int Calculator ::sumCompcomplex(complex o1, complex o2);

    // Aliter--------------->Declaring the entire calculator class as Friend :::::::::
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};
int Calculator ::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}         
int Calculator ::sumCompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int result = calc.sumRealcomplex(o1, o2);
    cout << "The sum of Real Part of o1 and o2 is " << result << endl;
    int results = calc.sumCompcomplex(o1, o2);
    cout << "The sum of Complex Part of o1 and o2 is " << results << endl;
    return 0;
}