//Variable scope and data types
#include <iostream>
using namespace std;
int glo = 6;

void sum()
{
    int a;
    cout << glo;

}
int main(){
    int glo = 9;
    glo = 78;
    int a = 13;
    int b = 35;
    float pi = 3.14;
    char c = 'V';
    bool is_true = true;
    is_true = false;
    //cout<<"This is my world and value of a is " << a <<"\nValue of b is " << b;
    //cout<<"\nThe value of pi is"<<pi;
    //cout<<"\nThe value of c is"<<c;
    sum();
    cout<<glo<<is_true;
    
    return 0;
}