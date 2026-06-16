#include <iostream>
#include <string>
using namespace std;
// namespace myNamespace{
//     int x = 42;
// }
// int main(){
//  system("cls");
//  cout<<myNamespace::x;

//     return 0;
// }
namespace mynamespace
{
    int x = 42;
}
using namespace mynamespace;

int main()
{
    system("cls");
    std ::cout << x;

    return 0; 
}