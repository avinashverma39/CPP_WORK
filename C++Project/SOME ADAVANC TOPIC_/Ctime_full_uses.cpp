#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    system("cls");
    struct tm dateTime;
    time_t timestamp;
    dateTime.tm_year = 2025 - 1900;
    dateTime.tm_mon = 7 - 1;
    dateTime.tm_mday = 8;
    dateTime.tm_hour = 12;
    dateTime.tm_min = 40;
    dateTime.tm_sec = 1;
    dateTime.tm_isdst = -1;

    timestamp = mktime(&dateTime);

    cout << ctime(&timestamp);

    return 0;
}
