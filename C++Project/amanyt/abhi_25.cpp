#include <iostream>
#include <string>
using namespace std;

class emploeey
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter The id of Emploeey : ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this Emploeey is : " << id << endl;
    }
};

int main()
{
    // emploeey aman, jeet, shivam, ankit;
    // aman.setId();
    // aman.getId();
    emploeey am[4];
    for (int i = 0; i < 4; i++)
    {
        am[i].setId();
        am[i].getId();
    }

    return 0;
}