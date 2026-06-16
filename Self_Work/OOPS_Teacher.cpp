#include <iostream>
#include <string>
using namespace std;
class Teacher
{
private:
    int Id;
    int salary;

public:
    string name;
    string subject;
    string qualification;

    void setData(string n, string s, string q)
    {
        name = n;
        subject = s;
        qualification = q;
    }
    void getData()
    {
        cout << "Teacher Name is " << name << endl;
        cout << endl;
        cout << "He is taught by " << subject << endl;
        cout << endl;
        cout << "Teacher qualification is " << qualification << endl;
        cout << endl;
    }

    void setId(int i, int sal)
    {
        salary = sal;
        Id = i;
    }
    void getId()
    {
        cout << "Teacher Id is : " << Id << endl;
        cout << endl;
        cout << "Teacher Salary is :" << salary << endl;
        cout << endl;
    }
};
int main()
{
    system("cls");
    Teacher t1, t2, t3;
    t1.setId(1, 20000);
    t1.setData("Ram Verma", "English", "BSc");
    t1.getData();
    t1.getId();

    cout << "-----------------> New Teacher:--------> " << endl;
    cout << endl;
    t2.setId(2, 25000);
    t2.setData("Aman Verma", "C++", "BTech Pursuing");
    t2.getData();
    t2.getId();

    cout << "------------------> New Teacher:--------->" << endl;
    cout << endl;
    t3.setId(3, 30000);
    t3.setData("Shivam Verma", "Programming", "BCA");
    t3.getData();
    t3.getId();

    return 0;
}