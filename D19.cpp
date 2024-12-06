//C++ Objects Memory Allocation & using Arrays in Classes 
//D19 + 1 is same code just without loop and much more simple.
#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(int numItems);
    void displayPrice(void);
};

void Shop::setPrice(int numItems)
{
    for (int i = 0; i < numItems; i++)
    {
        cout << "Enter the id of item " << (counter + 1) << ": ";
        cin >> itemId[counter];
        cout << "Enter the price of item: ";
        cin >> itemPrice[counter];
        counter++;
    }
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The id of item is " << itemId[i] << " and its price is: " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop Viraj;
    Viraj.initCounter();
    
    int numberOfItems;
    cout << "Enter the number of items you want to add: ";
    cin >> numberOfItems;

    Viraj.setPrice(numberOfItems);
    Viraj.displayPrice();

    return 0;
}
