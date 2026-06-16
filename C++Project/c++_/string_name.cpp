#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << " Enter Your First Name : ";
    cin >> name;
    // cout << "Your name is : " << name <<endl;
    string last;
    cout << " Enter Your Last Name : ";
    cin >> last;
    cout << "Your Full Name is : " << name + " " << last;
    return 0;
}