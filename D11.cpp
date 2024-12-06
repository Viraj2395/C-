//Structures, Unions & Enums in C++
#include <iostream>
using namespace std;

struct employee
{
   int eId;
   char favChar;
   float salary;
};

union money{

int rice;
float pounds;
char car;

};

int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;


    struct employee viraj;
    struct employee viraaaj;
    viraj.eId = 1;
    viraj.favChar = 'A';
    viraj.salary = 1002;

    cout<<"The value is "<<viraj.eId<<endl;
    cout<<"The value is "<<viraj.favChar<<endl;
    cout<<"The value is "<<viraj.salary<<endl;

    return 0;
}