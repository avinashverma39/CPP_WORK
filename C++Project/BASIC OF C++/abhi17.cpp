#include <iostream>
#include <string>
using namespace std;

// inline function.....

//inline Product(int a, int b)
// {
//     // static int c = 0;
//     // c = c + 1;        // This execute only once->
//     return a * b; // Next time this function is run,the value of c will be retained---->
// }

float moneyReceived(int currentmoney, float factor = 1.05)
{
    return currentmoney * factor;
}
int main()
{
    int a, b;
    // cout << "Enter The value a and b : ";
    // cin >> a >> b;

    int money = 100000;

    cout << "If You Have " << money << " Rs in your bank account , You will recive " << moneyReceived(money) << " Rs after 1 Year";
    cout << " For VIP : If You Have " << money << " Rs in your bank account , You will recive " << moneyReceived(money, 1.1) << " Rs after 1 Year";
    /* cout << "The Product of a and b is " << Product(a, b) << endl;
     cout << "The Product of a and b is " << Product(a, b) << endl;
     cout << "The Product of a and b is " << Product(a, b) << endl;
     cout << "The Product of a and b is " << Product(a, b) << endl;
     cout << "The Product of a and b is " << Product(a, b) << endl;
     cout << "The Product of a and b is " << Product(a, b) << endl;
     cout << "The Product of a and b is " << Product(a, b) << endl;
     cout << "The Product of a and b is " << Product(a, b) << endl;*/

    return 0;
}