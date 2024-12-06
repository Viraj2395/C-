// Constructors in Derived Class in C++
#include <iostream>
using namespace std;

class Base1
{
    int Data1;

public:
    Base1(int i)
    {
        Data1 = i;
        cout << "Base1 class constructor is called " << endl;
    }
    void printDataBase1(void)
    {
        cout << "The value of Data 1 is " << Data1 << endl;
    }
};
class Base2
{
    int Data2;

public:
    Base2(int i)
    {
        Data2 = i;
        cout << "Base 2 class constructor is called " << endl;
    }
    void printDataBase2(void)
    {
        cout << "The value of Data 2 is " << Data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Dervied class constructor is called" << endl;
    }
    void printDataBase2(void)
    {
        cout << "The value of Derived 1 is " << derived1 << endl;
        cout << "The value of Derived 2 is " << derived2 << endl;
    }
};

int main()
{
    Derived V(1,2,3,4);
    V.printDataBase1();
    V.printDataBase2();
    return 0;
}
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
