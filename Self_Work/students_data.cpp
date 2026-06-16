#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int roll_no;
    int marks;

public:
    Student(string n, int r, int m)
    {
        name = n;
        roll_no = r;
        marks = m;
    }
    void displayInfo()
    {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Your marks is: " << marks << endl;
        if (marks > 45)
        {
            cout << "You are passed.";
        }
        else
        {
            cout << "You are Fail.";
        }
    }
};
int main()
{
    system("cls");
    string name;
    int roll_no, marks;
    cout << "Enter student's name: ";
    cin >> name;

    cout << "Enter roll number: ";
    cin >> roll_no;

    cout << "Enter your Marks: ";
    cin >> marks;

    Student s1(name, roll_no, marks);

    s1.displayInfo();

    return 0;
}