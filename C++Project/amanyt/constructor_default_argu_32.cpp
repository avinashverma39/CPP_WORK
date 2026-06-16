#include <iostream>
#include <string>
using namespace std;
class simple
{

    int data1;
    int data2;

public:
    simple(int a, int b = 9)
    {
        data1 = a;
     
        data2 = b;
    }
    void printdata();
};
void simple ::printdata()
{
    cout << "The Value of data1 and data2 is " << data1 << " and " << data2 << endl;
}
int main()
{
    system("cls");
    simple s(1, 4);
    s.printdata();

    simple s1(1);
    s1.printdata();
    return 0;
}