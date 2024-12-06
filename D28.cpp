// Constructors With Default Arguments In C++
#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 15)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};

void Simple ::printData()
{
    cout << "The value of Data1 Data2 amd Data3 is " << data1 << " , " << data2 << " And " << data3 << endl;
}

int main()
{
    Simple x(1, 2, 3);
    x.printData();

    return 0;
}