// More on C++ Friend Functions
/*#include <iostream>
using namespace std;

class y;

class x{
  int data;
    public :
      void Setdata(int value){
        data = value;
      }
    friend void add(x, y);
};

class y{
    int num;
     public :
      void Setdata(int value){
        num = value;
      }
    friend void add(x, y);
};

void add(x o1, y o2){
    cout<<"Summing data of Class x and Class y is "<< o1.data + o2.num<<endl;
}

int main(){
    x A;
    A.Setdata(6);

    y B;
    B.Setdata(19);

    add(A ,B);

    return 0;
}
*/

