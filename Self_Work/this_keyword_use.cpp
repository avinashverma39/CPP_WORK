#include <iostream>
#include <string>
using namespace std;
class box
{
public:
    int length;
    void setLength(int length)
    {
        this->length = length;
    }
    void show()
    { 
        cout << "Length = " << this->length;
    }
};
int main()
{
    system("cls");
    box b1;
    b1.length = 10;
    b1.show();

    return 0;
}