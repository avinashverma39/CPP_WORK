#include <iostream>
#include <string>
using namespace std;

class Employee
{

    int Id;
    static int count;

public:
    void setData(void)
    {

        cout << "Enter your Id: ";
        cin >> Id;
        count++;
    }

    void getData(void)
    {

        cout << "The Id of this employee  is " << Id << " and the  employee number is " << count << endl;
    }
};

int Employee ::count = 100;
int main()
{
    system("cls");

    Employee abhi, ram, rohan;
    abhi.setData();
    abhi.getData();

    ram.setData();
    ram.getData();

    rohan.setData();
    rohan.getData();

    return 0;
}