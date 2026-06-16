#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    system("cls");
    time_t timestamp = time(NULL);
    time(&timestamp);
    cout << ctime(&timestamp);
    cout << timestamp;
    return 0;
}   