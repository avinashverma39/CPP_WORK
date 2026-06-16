#include <iostream>
using namespace std;

int main()
{
    float temp;
    cout << "Enter The Tempreture :";
    cin >> temp;
    if (temp < 10)
    {
        cout << "Too Cold" << endl;
    }
    else if (temp < 20)
    {
        cout << "Cool" << endl;
    }
    else if (temp < 30)
    {
        cout << "Warm" << endl;
    }
    else
    {
        cout << "Hot";
    }

    return 0;
}
