#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    system("cls");

    ofstream OutFile("Avinash.txt");
    OutFile << "File is Created ";
    OutFile.close();

    return 0;
}