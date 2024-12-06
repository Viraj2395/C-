// Pointers to Derived Classes in C++ 
#include <iostream>
using namespace std;

class BaseClass{
    public:
        int var_Base;
        void display(){
            cout<<"Displaying Base class variable var_Base "<< var_Base <<endl;
        }    
};
class DerivedClass: public BaseClass{
    public:
        int var_Derived;
        void display(){
            cout<<"Displaying Base class variable var_Base "<< var_Base <<endl;
            cout<<"Displaying Base class variable var_Derived "<< var_Derived <<endl;
        }    
};

int main(){
    BaseClass * Base_Class_Pointer;
    BaseClass obj_Base;
    DerivedClass obj_Derived;
    Base_Class_Pointer = &obj_Derived;

    Base_Class_Pointer ->var_Base = 41;
    // base_class_pointer->var_derived= 134; // Will throw an error
    Base_Class_Pointer -> display();

    Base_Class_Pointer ->var_Base = 246;
    Base_Class_Pointer -> display();

    DerivedClass * Derived_Class_Pointer;
    Derived_Class_Pointer = &obj_Derived;
    Derived_Class_Pointer -> var_Derived = 6932;
    Derived_Class_Pointer -> var_Base = 7;

    Derived_Class_Pointer -> display();
    return 0;
}