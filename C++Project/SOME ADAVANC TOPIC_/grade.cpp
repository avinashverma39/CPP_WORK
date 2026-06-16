#include <iostream>
using namespace std;

int main()
{
    float marks;
    cout << "Enter Your Marks :";
    cin >> marks;

    if (marks >= 0 && marks <= 100)
    {
        if (marks >= 40)
        {
            cout << "Passed" << endl;
            if (marks >= 90)
            {
                cout << "Grade: A+" << endl;
            }
            else if (marks >= 75)
            {
                cout << "Grade : A" << endl;
            }
            else if (marks >= 60)
            {
                cout << "Grade : B " << endl;
            }
            else if (marks >= 50)
            {
                cout << "Grade : C " << endl;
            }
            else
            {
                cout << "Grade : D " << endl;
            }
        }
        else
        {
            cout << "Result Fail" << endl;
        }
    }
    else
    {
        cout << "Enter marks betwen 0  to 100  " << endl;
    }

    return 0;
}
