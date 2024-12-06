#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(int numOfitems);
    void displayPrice(void);
};

void Shop ::setPrice(int numOfitems)
{
    for (int i = 0; i < numOfitems; i++)
    {
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
    }
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    int numOfitems;

    cout<<"Enter the number of items you want to create: ";
    cin>>numOfitems;

    dukaan.setPrice(numOfitems);
    dukaan.displayPrice();
    return 0;
}
