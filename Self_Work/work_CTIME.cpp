#include <iostream>
#include <ctime>
using namespace std;
int main()
{
     system("cls");
     time_t now = time(0);
     tm *ltm = localtime(&now);

     cout << "Year: " << 1900 + ltm->tm_year
          << endl;
     cout << "Month: " << 1 + ltm->tm_mon
          << endl;
     cout << "Day: " << ltm->tm_mday
          << endl;
     cout << "Time: " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec
          << endl;

     return 0;
}  
