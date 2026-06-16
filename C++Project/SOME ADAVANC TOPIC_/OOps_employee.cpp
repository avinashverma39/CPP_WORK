#include <iostream>
using namespace std;
class Employee
{
private:
    double salary;

public:
    string Name, Department;

    void setSalary(double sal) // Setter________
    {
        salary = sal;
    }
    void getSalary()
    {
        cout << salary << endl;
    }
    void showDetails()
    {

        cout << Name << endl;
        cout << Department << endl;
       
    }
};

int main()
{   
    system("cls");
    Employee e1;
    e1.Name = "Ram";
    e1.Department = "IT";
    e1.setSalary(50000);
    e1.getSalary();
    e1.showDetails();
}