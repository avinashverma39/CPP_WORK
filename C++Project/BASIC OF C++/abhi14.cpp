#include <iostream>
#include <string>
using namespace std;
typedef struct worker
{
    int eId;      // 4
    char favChar; // 1
    float salary; // 4
} wr;
union money
{
    int rice;     // 1
    char car;     // 4
    float pounds; // 4
};
int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };

    Meal m1 = breakfast;
    cout << m1;
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'A';
    // cout << m1.rice << endl;
    // cout << m1.car;

    wr avinash;
    avinash.eId = 2;
    avinash.favChar = 's';
    avinash.salary = 200000;
    cout << "The value is " << avinash.salary << endl;
    cout << "The value is " << avinash.eId << endl;
    cout << "The value is " << avinash.favChar << endl;

    return 0;
}