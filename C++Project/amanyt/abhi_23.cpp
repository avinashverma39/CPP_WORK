#include <iostream>
#include <string>
using namespace std;
class shop
{
    int itemId[1000];
    int itemPrice[1000];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter Id of your Item  no. " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of Item no." << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::displayPrice(void)
{

    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of Item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();

    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}