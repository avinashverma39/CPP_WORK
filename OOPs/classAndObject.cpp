#include <iostream>
#include <string>
using namespace std;
class teacher
{
private:
    int age;
    int salary; // Private Data member

public:
    string name;
    int workingTime; // public data member

    void setData(int a, int b); // Public Member Function

    void getData()
    {

        cout << "Name: " << name << endl;
        cout << "Working Time is: " << workingTime << endl; // Public data member Accessible outside the class

        // Private Data members access through using set Data

        cout << "Employee Age is: " << age << endl;
        cout << "Employee Salary is: " << salary << endl;
    }
};

void teacher::setData(int a, int b)
{
    age = a;
    salary = b;
}
int main()
{
    system("cls");

    teacher n1;
    n1.name = "Nitin";
    n1.workingTime = 25;

    n1.setData(41, 5980);
    n1.getData();

    return 0;
}