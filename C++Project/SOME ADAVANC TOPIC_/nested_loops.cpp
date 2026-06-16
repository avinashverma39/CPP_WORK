#include <iostream>
using namespace std;

int main()
{
    // outer loop for row  ----------->
    for (int i = 1; i <= 3; i++)
    {
        // inner loops for coloum ---------->
        for (int j = 1; j <= 3; j++)
        {

            cout << j << " "; // print coloum number------>
        }

        cout << endl; // Move to next line after each row ----->
    }

    return 0;
}