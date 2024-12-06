// Ambiguity Resolution in Inheritance in C++
#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Dervied : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};

class D: public B
{
    int a;
    // D's new say() method will over ride base class's say() method
public: 
    void say()
    {
        cout << "Hello My beautiful people " << endl;
    }
};
int main()
{
    // Ambiguity 1
    // Base1 Base1obj;
    // Base2 Base2obj;

    // Base1obj.greet();
    // Base2obj.greet();

    // Dervied V;
    // V.greet();

    // Ambiguity 2

    B b;
    b.say();

    D d;
    d.say();
    return 0;
}