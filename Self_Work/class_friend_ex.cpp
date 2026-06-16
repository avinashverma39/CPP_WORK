#include <iostream>
#include <string>
using namespace std;
class box
{
private:
    int length;

public:
    box()
    {
         length = 10;
    }
    friend void displayLength(box len);
};
 void displayLength(box len){
   cout<<len.length;
}

int main()
{
    system("cls");
     box b1;
    displayLength(b1);


    return 0; 
}