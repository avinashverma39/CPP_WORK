#include <iostream>
#include <string>
using namespace std; 
void swapNum(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}
int main()
{
    int firstNum = 10;
    int secondNum = 20;
    cout << "Befor Swaping Value :" << endl;
    cout << firstNum << endl
         << secondNum << endl;
    cout << "After Swaping Value :" << endl;
    swapNum(firstNum, secondNum);
    cout << firstNum << endl
         << secondNum;

    return 0;
}