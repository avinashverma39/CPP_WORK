#include <iostream>
#include <string>
using namespace std;
class A
{
public:
    void Inside()
    {
        cout << "Inside the Class";
    }

    void Outside();
};

void A::Outside()

{
    cout << "\nOutside the class";
}

int main()
{
    system("cls");
    A c;
    c.Inside();
    c.Outside();

    return 0;
} 