#include <iostream>
#include <string>
using namespace std;

int main()
{
    string lettrs[2][4] = {

        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << lettrs[i][j] << endl;
        }
    }

    // lettrs[0][0] = "Z";
    // cout << lettrs[0][0] << endl;
    // cout << lettrs[0][1] << endl;
    // cout << lettrs[0][2] << endl;
    // cout << lettrs[0][3] << endl;
    // cout << lettrs[0][4] << endl;
    // lettrs[1][1] = "D";
    // cout << lettrs[1][1] << endl;
     
    return 0;
}