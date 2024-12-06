// Multiple inheritence Deep dive with code example
#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void set_int1(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_int2(int a)
    {
        base2int = a;
    }
};

class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "The value of Base1 is " << base1int << endl;
        cout << "The value of Base2 is " << base2int << endl;
        cout << "The sum of this value is " << base1int + base2int << endl;
    }
};

// The inherited dervied class will look something like this
// Data members:
// base1int ---> protecteed
// base2int ---> protecteed
// member function:
// set_base1int() --> public
// set_base2int() --> public
// show() --> public

int main()
{
    derived Viraj;
    Viraj.set_int1(23);
    Viraj.set_int2(24);
    Viraj.show();

    return 0;
}
