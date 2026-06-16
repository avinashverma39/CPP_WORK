#include <iostream>
#include <string>
#include <vector>
using namespace std;
  
int main()
{
   // system("cls");
    vector<string> v1;
    vector<string> v2{"Ford", "Volvo"};
    vector<string> v3 = {"Range", "Rover", "Swift", "Thar", "KN"};
    vector<string> v = {"Range", "Rover", "Swift", "Thar", "KN"};
    for (string x : v)
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