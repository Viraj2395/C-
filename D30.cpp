// Copy Constructor in C++
#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number(){
        a =0;
    }
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    {
        cout<<"Copy constructer called"<<endl;
        a = obj.a;
    }
//When no copy constructor is found, Compiler supplies its own copy construction
//It's not neccesory to write this below 5 lines And it invoke without any errors
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();
    Number z1(x);//Copy constructor called
    z1.display();
    //z1 should exactly resemble z or x or y

    z2 = z;//Copy constructor not called
    z2.display();

    Number z3 =z;
    z3.display();

    return 0;
}