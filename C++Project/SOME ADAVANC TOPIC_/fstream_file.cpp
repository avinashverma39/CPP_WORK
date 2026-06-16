#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    system("cls");
    ofstream Outfile("example.txt");
    Outfile << "Hello file system";
    Outfile.close();
    ifstream infile("example.txt");
    string line;
    while (getline(infile, line))
    {
    cout << line; 
    }

    infile.close();
    return 0;
}
