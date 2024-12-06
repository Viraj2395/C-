//C++ Templates: Class Templates with Default Parameters 
#include <iostream>
using namespace std;

template<class T1 = int, class T2 = float, class T3 = char> 
class V{
    public:
     T1 x;
     T2 y;
     T3 z;
        V(T1 a, T2 b , T3 c){
            x = a;
            y = b;
            z = c;
        }
        void printdata(){
            cout<<"The value of x is "<< x << endl;
            cout<<"The value of y is "<< y << endl;
            cout<<"The value of z is "<< z << endl;
        }
};

int main(){
    V<> G(3,1.2,'c');
    G.printdata();
    cout<<endl;

    V<float , int , int> H(3.9,1,4);
    H.printdata();
    return 0;
}
