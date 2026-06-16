#include <iostream>
using namespace std;
int main()
{
    // int number;
    // cout << "Enter The Value : ";
    // cin >> number;

    // if (number % 5 == 0 && number % 11 == 0)

    // {
    //     cout << "The Number is divisival by both 5 and 11" << endl;
    // }
    // else
    // {
    //     cout << "The Number is not Divisival by both 5 and 11";
    // }

    // int num1 ;
    // cout<<"Enter The Number That You Check : ";
    // cin>>num1;

    // if(num1> 0)
    // {
    //     cout<<"The Number Is Positive ." <<endl;

    // }else if(num1<0)
    // {
    //     cout<<"The number is Negative. "<<endl;

    // } else{cout<<"The value is Zreo . ";
    // }

    int a;
    int b;
    cout << "Enter The Number That you want to check :";
    cin >> a >> b;

    if (a > b)
    {
        cout << "The greater number is " << a << endl;
    }
    else if (b > a)
    {
        cout << "The greater number is  " << b << endl;
    }
    else
    {
        cout << "Both Numbers are Equal ";
    }

    return 0;
}