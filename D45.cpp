// this pointer in c++
#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
            this->a = a;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    //this is a keyword which is a pointer which points to the object which invokes the member function
    //If we want to use same name of variable in class and function variable then we can use this function
    A a;
    a.setData(4)//a.setdata(4).getData()//You can also write this;
    a.getData();
    return 0;
}
