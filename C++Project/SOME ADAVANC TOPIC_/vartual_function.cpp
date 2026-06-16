#include <iostream>
#include <string>
using namespace std;
class animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes sound " << endl;
    }
};

class dog : public animal
{
public:
    void sound() override
    {
        cout << "Dog Barks";
    }
};

int main()
{
    system("cls");
    animal *a;
    dog d;
    a = &d;
    a->sound();
    

    return 0;
}