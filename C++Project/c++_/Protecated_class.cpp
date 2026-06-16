#include <iostream>
#include <string>
using namespace std;
class Animal
{
protected:
    string Name;

public:
    void setName(string N)
    {

        Name = N;
    }
};
class Dog : public Animal
{
public:
    void displayMain()
    {
        cout << "The Dog Name is :" << Name;
    }
};
int main()
{
    system("cls");
    Dog d1;
    d1.setName("Tommy");
    d1.displayMain();

   //cout<< d1.Name;
   
    return 0;
}