#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
    int salary;
};
class programmer : public Employee
{
public:
    int Bonus;
    void setSalary(int s)
    {
        salary = s;
    }

    int getSalary()
    {
        cout<< salary;
    }
};
int main()
{
    system("cls");
    programmer e1;
    e1.setSalary(100000);
    e1.Bonus = 15000;
    e1.getSalary();

        return 0;
}