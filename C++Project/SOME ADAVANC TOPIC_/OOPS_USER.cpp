#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    string name;
    int age;
    string qul = " Pass";

    void input()
    {
        cout << "Enter Your Name : " << endl;
        cin >> name;
        cout << "Enter Your Age : " << endl;
        cin >> age;
        cout << "Your Qualification : " << endl;
        cin >> qul;
    }
    void displayData()
    {
        cout << name << " " << age << " " << qul << " " << "Pass" << endl;
    }
};
int main()
{
    system("cls");
    Student s1;
    s1.input();
    s1.displayData();

    return 0;
}