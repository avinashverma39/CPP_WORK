                        // MULTILEVEL EX--------------->
#include <iostream>
#include <string>
using namespace std;
class grandFather
{
public:
    void story()
    {
        cout << "\nGrand Father Tell  us story ";
    }
};
class Father : public grandFather
{
public:
    void morel()
    {
        cout << "\nFather Tell Us Morel Story ";
    }
};
class child : public Father
{
public:
    void play()
    {
        cout << "\nChild Loves to Play ";
    }
};

int main()
{
    system("cls");
    child c;
    c.story();
    c.morel();
    c.play();

    return 0;
}