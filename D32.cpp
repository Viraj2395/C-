// Inheritance & Its Different Types with Examples in C++
#include <iostream>
using namespace std;
// Base Class
class Employee
{
public:
    int id;
    float salary;
     Employee() {} // Default constructors
     Employee(int inpyid)
      {
         id = inpyid;
         salary = 34.0;
      }
};
// Derived Class
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc....
}
1. Default visibility mode is private
2. Public visibility Mode: Public members of the base class becomes public members of the derived class
3. Private visibility Mode: public members of the base class becomes private members of the derived class
4. Private members are never inherited
*/

// Creating a Programmer class derived from eployee Base class
// If you write public after : THis you can print id if you want
class Programmer : Employee
{
public:
    Programmer(int inpyid)
    {
        id = inpyid;
    }
    int languageCode = 9;
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee Viraj(1), roshan(2);
     cout << Viraj.salary << endl;
     cout << roshan.salary << endl;
    Programmer Skillf(10);
     cout << Skillf.languageCode << endl; // You kind invoke Skillf.id since the id is private...
    // it is public in base class but you didn't write it in a visibility method so it's private

     Skillf.getdata();

    return 0;
}