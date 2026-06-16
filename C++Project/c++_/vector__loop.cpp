#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    system("cls");
    vector<int> v1;
    vector<int> v2{5, 100};
    vector<int> v3 = {1, 2, 3, 4};
    vector<int> v = {1, 2, 3, 4, 5};
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    for (auto IT = v.begin(); IT != v.end(); ++IT)
    {
        cout << *IT << " ";
    }
    cout << endl;

    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}