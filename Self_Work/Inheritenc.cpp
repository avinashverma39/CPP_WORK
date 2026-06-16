// CODE FOR INHERITANCE-------------------->
#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "\n Anyone is eating";
    }
};                                                                               
class Dog : public Animal
{
public:
    void Bark()
    {
        cout << "Dog is Baring";
    }
};
int main()
{
    system("cls");
    Dog d;
    d.Bark();
    d.eat();

    return 0;
}