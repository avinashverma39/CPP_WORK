#include <iostream>
#include <string>
using namespace std;
class BankBalance
{
private:
    int Balance;

public:
    void setBalance(int B)
    {
        Balance = B;
    }
    int getBalance()
    {
        cout<<Balance;
    }
};
int main()
{
    system("cls");
    BankBalance b1;
    b1.setBalance(100000);
    b1.getBalance();

    return 0;
}