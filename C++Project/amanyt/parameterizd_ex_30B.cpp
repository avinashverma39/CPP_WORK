#include <iostream>
#include <string>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The Point is (" << x << "," << y << ")" << endl;
    }
};
int main()
{
    // Create a function (Make it a friend function) which takes 2 point object and computs the distance between those 2 point ?
      

    system("cls");
    point p(1, 1);
    p.displayPoint();
    point q(4, 6);
    q.displayPoint();

    return 0;
}