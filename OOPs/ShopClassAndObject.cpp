#include <iostream>
#include <string>
using namespace std;
class shop
{

private:
    int IteamId[100];
    int IteamPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setData(void);
    void displayData(void);
};

void shop ::setData(void)
{
    cout << "Enter Iteam Id: ";
    cin >> IteamId[counter];
    cout << "Enter Iteam Price: ";
    cin >> IteamPrice[counter];
    counter++;
}

void shop ::displayData(void)
{

    for (int i = 0; i < counter; i++)
    {

        cout << "Iteam Id and Price is: " << IteamId[i] << " , " << IteamPrice[i];
    }
}

int main()
{
    system("cls");

    return 0;
}