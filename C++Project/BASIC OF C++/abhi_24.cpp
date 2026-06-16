#include <iostream>
#include <string>
using namespace std;
class Emploeey
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter The Id : " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this emploeey is : " << id << " and this is emploeey number : " << count << endl;
    }
    static void getCount(void)
    {
        cout << "The Value is count is : " << count << endl;
    }
};
// Count is the static data member of class Emploeey.....
int Emploeey::count = 100; // Deafult Value is 0.........
int main()
{
    Emploeey Aman, Avinash, Shivam;

    // Aman.id = 1;
    // Aman.count = 1; --------------> //can not do this as id and count are private......

    Aman.setData();
    Aman.getData();
    Emploeey::getCount();

    Avinash.setData();
    Avinash.getData();
    Emploeey::getCount();

    Shivam.setData();
    Shivam.getData();
    Emploeey::getCount();

    return 0;
}