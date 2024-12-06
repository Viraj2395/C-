//Inheritance Syntax & Visibility Mode in C++
#include <iostream>
using namespace std;

class Base{
  int data1;//private by default and not inheritable
   public: 
     int data2;
     void setdata();
     int getData1();
     int getData2();
};

void Base :: setdata(void){
   data1 = 10;
   data2 = 20;
}

int  Base :: getData1(){
    return data1;
}

int  Base :: getData2(){
    return data2;
}

class Derived : public Base// Class is being derived publically
{
  int data3;
   public:
      void process();
      void display();
};

void Derived :: process(){
    // der.setdata() We have to call it her if we want to make it private
    data3 = data2 * getData1();
}

void Derived :: display(){
    cout<<"Value of data 1 is "<<getData1()<<endl;
    cout<<"Value of data 2 is "<<data2<<endl;
    cout<<"Value of data 3 is "<<data3<<endl;
}    

int main(){
    Derived der;
    der.setdata();//And we can't call this when it's private
    der.process();
    der.display();
    return 0;
}
//In the 27th line if we want to make the derived class private we have to write private instead of public 