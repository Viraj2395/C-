//Virtual function in cpp
#include <iostream>
using namespace std;

class BaseClass {
public:
    int var_Base = 1;

    
    virtual void display() {
        cout << "Displaying Base class variable var_Base " << var_Base << endl;
    }
};

class DerivedClass : public BaseClass {
public:
    int var_Derived = 2;

    void display() override {
        cout << "Displaying Base class variable var_Base " << var_Base << endl;
        cout << "Displaying Derived class variable var_Derived " << var_Derived << endl;
    }
};

int main() {
    BaseClass* Base_Class_Pointer;
    BaseClass obj_Base;
    DerivedClass obj_Derived;

    Base_Class_Pointer = &obj_Derived;
    Base_Class_Pointer->display();

    return 0;
}
