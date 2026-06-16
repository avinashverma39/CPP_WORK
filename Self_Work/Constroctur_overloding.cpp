#include <iostream>
#include <string>
using namespace std;
class sum
{
public:
    sum(int a, int b)
    {
        cout << a + b<<endl;
    }
    sum(int a, int b, int c)
    {
        cout << a + b + c<<endl;
    }
    sum(int a, int b, int c, int d)
    {
        cout << a + b + c + d<<endl;
    }
};
int main()
{
    system("cls"); 
    sum Add(2, 4);
    sum Add1(2, 4,5);
    sum Add2(2, 4,6,7);

    return 0;
}