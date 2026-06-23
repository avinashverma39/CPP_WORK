#include <iostream>
#include <string>
using namespace std;

class Employee
{

private:
    int salary; // private data member
    int age;
    int experience;

public:
    string name;
    int workTime;

    void setData(int a, int b, int c); // public member

    void getData()
    {
        cout << "Name: " << name << endl;
        cout << "Working Time: " << workTime << endl;

        cout << "Salary: " << salary << endl;         // private data members can't be accessed outside the class
        cout << "Age: " << age << endl;               // private data members can't be accessed outside the class
        cout << "Experience: " << experience << endl; // private data members can't be accessed outside the class
    }
};

void Employee::setData(int a, int b, int c)
{
    salary = a;
    age = b;
    experience = c;
}
int main()
{
    system("cls");

    Employee Avinash;
    Avinash.name = "Avinash Verma";
    Avinash.workTime = 10;
    Avinash.setData(9200, 24, 1);
    Avinash.getData();
    return 0;
}