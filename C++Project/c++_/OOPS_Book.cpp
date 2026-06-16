#include <iostream>
#include <string>
using namespace std;
class book
{
public:
    string Title;
    string Author;
    int Year;

    void setData(string t, string a, int y)
    {
        Title = t;
        Author = a;
        Year = y;
    }
    void displayData()
    {
        cout << "Book Title is " << Title << endl
             << "Author is " << Author << endl
             << "Since Released " << Year << endl;
    }
};
int main()
{
    system("cls");
    book a1, a2;
    a1.setData("C++ Programming", "Bjarne Stroustrup", 1985);
    a1.displayData();
    cout << endl;
    a2.setData("Hindi", "Ram Chand ", 1991);
    a2.displayData();

    return 0;
}
 