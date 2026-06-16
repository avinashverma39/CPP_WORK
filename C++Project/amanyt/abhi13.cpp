#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Array exampel--------->

    int marks[] = {23, 45, 56, 67, 77};
    int mathmarks[4];
    mathmarks[0] = 345;
    mathmarks[1] = 45;
    mathmarks[2] = 453;
    mathmarks[3] = 245;
    cout << "These are marks " << endl;

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    marks[2] = 433;
    // You can change the value of an Array------>
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    cout << "These are mathmarks" << endl;
    // cout << mathmarks[0] << endl;
    // cout << mathmarks[1] << endl;
    // cout << mathmarks[2] << endl;
    // cout << mathmarks[3] << endl;
    // cout << mathmarks[4] << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is " << mathmarks[i] << endl;
    }
    // ? = do the same using while and do while loops ?

    // C++ Pointers And Arrays--------->
    int *p = marks;
    cout << *(p++) << endl;
    cout << *p << endl; 

    cout << *(++p) << endl;

    // cout << "The Value of marks [0] is " << *p << endl;
    // cout << "The Value of marks [1] is " << *(p + 1) << endl;
    // cout << "The Value of marks [2] is " << *(p + 2) << endl;
    // cout << "The Value of marks [3] is " << *(p + 3) << endl;
    // cout << "The Value of marks [4] is " << *(p + 4) << endl;

    return 0;
}