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
    cout << "Enter Iteam Id of no : " << counter + 1 <<endl;
    cin >> IteamId[counter];
    cout << "Enter Iteam Price of no: " <<endl;
    cin >> IteamPrice[counter];
    counter++;
}

void shop ::displayData(void)
{

    for (int i = 0; i < counter; i++)
    {

        cout << "Iteam Id and Price is: " << IteamId[i] << " , " << IteamPrice[i]  <<endl;
    }
}

int main()
{
    system("cls");

    shop dukaan;
    dukaan.initcounter();
    dukaan.setData();
    dukaan.setData();
    dukaan.setData();
    dukaan.displayData();

    return 0;
}