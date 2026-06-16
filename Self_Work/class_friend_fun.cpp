#include <iostream>
#include <string>
using namespace std;
class employee
{
private:
    int salary;

public:
    employee(int s)
    {
        salary = s;
    }
      friend void displaySalary(employee emp);
};
void displaySalary(employee emp)
{
    cout << emp.salary;
}
int main()
{
    system("cls");
    employee e(100000);
    displaySalary(e);

    return 0;
}