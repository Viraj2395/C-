//Header files and operator
#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 5;
    cout<<"Operator in c++"<<endl;
    cout<<"Following types of Operators are there in C++"<<endl;
    cout<<"The value of a + b is : "<<a+b<<endl;
    cout<<"The value of a - b is : "<<a-b<<endl;
    cout<<"The value of a * b is : "<<a*b<<endl;
    cout<<"The value of a / b is : "<<a/b<<endl;
    cout<<"The value of a % b is : "<<a%b<<endl;
    cout<<"The value of a++ is : "<<a++<<endl;
    cout<<"The value of a-- is : "<<a--<<endl;
    cout<<"The value of ++a is : "<<++a<<endl;
    cout<<"The value of --a is : "<<--a<<endl;
    cout<<endl;

    cout<<"Following Operators are the comparison Operators"<<endl;
     cout<<"The value of a < b is : "<<(a<b)<<endl;
     cout<<"The value of a > b is : "<<(a>b)<<endl;
     cout<<"The value of a <= b is : "<<(a<=b)<<endl;
     cout<<"The value of a >= b is : "<<(a>=b)<<endl;
     cout<<"The value of a == b is : "<<(a==b)<<endl;
     cout<<"The value of a != b is : "<<(a!=b)<<endl;
     cout<<endl;

    cout<<"Following Operators are the logical Operators"<<endl;
    cout<<"The value of (a < b) && (a == b)  is "<<((a < b) && (a == b))<<endl;
    cout<<"The value of (a < b) || (a == b)  is "<<((a < b) || (a == b))<<endl;
    cout<<"The value of !(a == b)  is "<<(!(a == b))<<endl;
    cout<<endl;

    

    return 0;
}