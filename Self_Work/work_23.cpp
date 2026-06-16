#include <iostream>
#include <string>
using namespace std;
struct student
{
    string name;
    int age;
    char grade;
};
int main()
{
    student marks;
    marks.name = "Avinash Verma";
    marks.age = 17;
    marks.grade = 'A';

    cout << "Student Name Is : " << marks.name << endl
         << "And Age is : " << marks.age << endl
         << "His Grade Is : " << marks.grade;
    return 0;
}