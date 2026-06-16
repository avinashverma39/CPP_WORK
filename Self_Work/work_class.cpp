#include <iostream>
#include <string>
using namespace std;
class base
{
private:
    int secret = 123;

public:
    int getSecret()
    {
        cout << secret;
    }
};
class child : public base
{
public:
    void displaySecret()
    {
        getSecret();
    }
};

int main()
{
    system("cls");
    child c1;
    c1.getSecret();

    return 0;
}