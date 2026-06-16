#include <iostream>
using namespace std;
int main()
{
    // int marks;
    // cout<<"Enter Your Marks";
    // cin>>marks;
    // if(marks>=90){
    //     cout<<"Grade : A ";

    // } else if (marks>=75){
    //     cout<<"Grade : B ";
    //     } else if (marks>=50){
    //         cout<<"Grade : C   ";

    //     }else cout<<"Grade : F";
    int age;
    cout << "Enter your age ";
    cin >> age;
    if (age >= 25)
    {
        cout << "come in my birthday party";
    }
    else if (age >= 18)
    {
        cout << "come with your parents in my birthday party";
    }
    else if (age >= 15)
    {
        cout << " Do not come in my birthday party";
    }
    else
        cout << " permission denied for come in birthday party ";

    return 0;
}