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
    a = salary;
    b = age;
    c = experience;
}
int main()
{
    system("cls");

    return 0;
}