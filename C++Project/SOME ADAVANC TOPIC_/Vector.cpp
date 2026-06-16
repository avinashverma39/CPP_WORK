#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    system("cls");
    vector<int> number;
    number.push_back(10);
    number.push_back(20);
    number.push_back(30);

    cout << "First Element " << number[0];
    cout << "\nAll Elements\n";
    for (int num : number)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}