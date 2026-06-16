#include <iostream>
#include <string>
using namespace std;
void myFunction(int myNum[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << myNum[i]<<endl;
    }
}
int main()
{
    int myNumber[5] = {10, 45, 56, 67, 55};
    myFunction(myNumber);

    return 0;
}