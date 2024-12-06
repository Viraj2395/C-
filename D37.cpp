// Exercise on C++ Inheritance
#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalc
{
    int a;
    int b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performOperationsSimple()
    {
            cout << "The vlaue of a + b is = " << a + b << endl;
            cout << "The vlaue of a - b is = " << a - b << endl;
            cout << "The vlaue of a * b is = " << a * b << endl;
            cout << "The vlaue of a / b is = " << a / b << endl;
    }
    
};
class SciCalc
{
    int a;
    int b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performOperationsScientific()
    {
            cout << "The vlaue of cos(a) is = " << cos(a) << endl;
            cout << "The vlaue of sin(a) is = "  << sin(b) << endl;
            cout << "The vlaue of exp(b) is = "  << exp(b) << endl;
            cout << "The vlaue of tan(a) is = "  << tan(a) << endl;
    }
    
};

class HybridCalculator : public SimpleCalc, public SciCalc{

};

int main()
{
    // SimpleCalc Math1;
    // Math1.getData();
    // Math1.performOperations();
    HybridCalculator calc;
    calc.getDataScientific();
    calc.performOperationsScientific();
   
    
    calc.getDataSimple();
    calc.performOperationsSimple();

    return 0;
}