// C++ Templates: Templates with Multiple Parameters 
#include <iostream>
using namespace std;
/*
template<class T1, class T2>
class nameOfClass{
    //body
}
*/

template <class T1,class T2>
class myClass{
    public:
        T1 a;
        T2 b;
        myClass(T1 x,T2 y){
            a = x;
            b = y;   
        }
        void Print(){
            cout<<this->a << endl;
            cout<<this->b << endl;
        }
};


int main(){
    myClass <int,char> v(3,'v');
    v.Print();
    return 0;
}