// Friend Classes & Member Friend Functions in C++
#include <iostream>
using namespace std;

class Complex;

class calculator
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);

    int sumComComplex(Complex, Complex);
};
class Complex
{
    int a, b;
    //friend int calculator ::sumRealComplex(Complex o1, Complex o2);
    //friend int calculator ::sumComComplex(Complex o1, Complex o2);

    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumComComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(3, 6);
    o2.setNumber(2, 8);
    calculator Calc;
    int Res = Calc.sumRealComplex(o1, o2);
    cout << "Sum of Real part of o1 and o1 is " << Res << endl;
    int ResC = Calc.sumComComplex(o1, o2);
    cout << "Sum of Unreal part of o1 and o1 is " << ResC << endl;

}