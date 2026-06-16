// INPUT VALIDATION----------------------------->
#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("cls");
    int num;

    do
    {
        cout << " Enter a number 1 to 100 ";
        cin >> num;
    } while (num < 1 || num > 100);
    
    cout << "You Choses " << num;

    return 0;
}
