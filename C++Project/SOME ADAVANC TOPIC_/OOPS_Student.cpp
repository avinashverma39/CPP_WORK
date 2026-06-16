#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;

public:
    int age;

    void studentData()
    {
        cout << name << endl;
        cout << age << endl;
    }

    void setData(string na)
    {
        name = na;
    }
};
int main()

{
    system("cls");
    Student s1;
    s1.setData("\"Aman\"");
    s1.age = 21;
    s1.studentData();

    return 0;
}