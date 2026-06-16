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

    void setData(string n, string s, string q, int i, int sal)
    {
        name = n;
        subject = s;
        qualification = q;

        salary = sal;
        Id = i;
    }
    void getData()
    {
        cout << "Teacher Id is : " << Id << endl;
        cout << endl;
        cout << "Teacher Name is " << name << endl;
        cout << endl;
        cout << "He is thought by " << subject << endl;
        cout << endl;
        cout << "Teacher qualification is " << qualification << endl;
        cout << endl;

        cout << "Teacher Salary is :" << salary << endl;
        cout << endl;
    }

    // void setId(int i, int sal)
    // {
    //     salary = sal;
    //     Id = i;
    // }
    // void getId()
    // {
    //     cout << "Teacher Id is : " << Id << endl;
    //     cout << endl;
    //     cout << "Teacher Salary is :" << salary << endl;
    //     cout << endl; 
    // }
};
int main()
{
    system("cls");
    Teacher t1, t2, t3;

    t1.setData("Ram Verma", "English", "BSc", 1, 30000);
    t1.getData();

    cout << "-----------------> New Teacher:--------> " << endl;
    cout << endl;

    t2.setData("Aman Verma", "C++", "BTech Pursuing", 2, 50000);
    t2.getData();

    cout << "------------------> New Teacher:--------->" << endl;
    cout << endl;

    t3.setData("Shivam Verma", "Programming", "BCA", 3, 70000);
    t3.getData();

    return 0;
}