#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string myString = "Hello";
    // cout << myString[0];
    // cout << endl;
    // string text = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // cout << "The length of the text string is : " << text[text.length() - 1];
    // // cout << text[10] << endl;
    // // cout << text[25];
    // string mystring = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // cout << mystring.at(0);
    // string my = "Hello";
    // my[4] = 's';
    // cout<<my;

    string name;
    cout << " Enter Your First Name : ";
    cin >> name;

    string last;
    cout << " Enter Your Last Name : ";
    cin >> last;
    cout << "Your Full Name  " << name + " " << last;
    cout << endl;
    int marks;
    cout << "Enter Your Marks : ";
    cin >> marks;
    if (marks >= 0 && marks <= 100)
    {
        if (marks >= 40)
        {
            cout << "You are Passed" << endl;
            if (marks >= 90)
            {
                cout << "Your Grade: A+" << endl;
            }
            else if (marks >= 75)
            {
                cout << "Your Grade : A" << endl;
            }
            else if (marks >= 60)
            {
                cout << "Your Grade : B " << endl;
            }
            else if (marks >= 50)
            {
                cout << "Your Grade : C " << endl;
            }
            else
            {
                cout << "Your Grade : D " << endl;
            }
        }
        else
        {
            cout << "Your Result Fail" << endl;
        }
    }
    else
    {
        cout << "Enter marks betwen 0  to 100  " << endl;
    }

    return 0;
}