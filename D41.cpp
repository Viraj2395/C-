//Initialization list in Constructors in Cpp
#include <iostream>
using namespace std;
/*
Syntax for initialization list in constructor :
constructor (argument- list) : initilization-section
{
    asssignment + other code
}
*/
class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j)
        // Test(int i, int j) : a(i), b(i + j)
        // Test(int i, int j) : a(i), b(2 * j)
        // Test(int i, int j) : a(i), b(a + j)
        // Test(int i, int j) : b(j), a(i + b)
        {
            // a = i;
            // b = j;
            cout<<"The value of a is "<< a << endl;
            cout<<"The value of b is "<< b << endl;
        }
};
int main(){
    Test V(3,4);
    return 0;
}