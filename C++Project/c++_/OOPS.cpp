#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    int Id;
    string Name;
    float Salary;

    void setData(int i, string n, float s)
    {
        Id = i;
        Name = n;
        Salary = s;
    }
    void displayData()
    {
        cout << "Costumer Id is " << Id << endl
             << "Costumer Name is " << Name << endl
             << "Costumer Salary is  " << Salary;
    }
};
int main()
{
    Employee e1;
    e1.setData(101, "Aman", 50000);
    e1.displayData();
    return 0;
}