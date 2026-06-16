#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string food = "Pizza";
    // string *ptr = &food;

    // cout << food << endl;

    // cout << *ptr << endl;

    // cout << &food;

    // int num = 10;
    // int *ptr = &num; // Pointer Ptr stored the address of num;;

    // cout << "Value of number: " << num << endl;
    // cout << "Address Of Number: " << &num << endl;
    // cout << "Pointer ptr hold The addrees:" << ptr << endl;
    // cout << "Value at the address ptr points to " << *ptr << endl;

    string food = "Pizza";
    string *str = &food;

    cout << food << endl;

    cout << &food << endl;

    cout << str << endl;

    cout << *str << endl;

    *str = "Burger";
    
    cout << *str << endl;
    cout << food << endl;

    return 0;
}
