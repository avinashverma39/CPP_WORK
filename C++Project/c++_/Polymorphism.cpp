  #include <iostream>
#include <string>
using namespace std;
class print
{
public:
    void show(int a)
    {
        cout << "Integer value is :" << a << endl;
    }
    void show(string s)
    {
        cout << "string value is :" << s << endl;
    }
    void show(float f)
    {
        cout << "float value is :" << f << endl;
    }
    void show(char c)
    {
        cout << "character value is :" << c << endl;
    }
};
int main()
{
    print p1;
    p1.show(1);
    p1.show("aman");
    p1.show(3);
    p1.show('A');

    return 0;
}