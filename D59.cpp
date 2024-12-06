// C++ Function Templates & Function Templates with Parameters
#include <iostream>
using namespace std;

// float numAvg(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T1, class T2>
float numAvg(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template <class T>

void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    float a;
    a = numAvg(5.7,6);
    printf("Average of 2 num is %f\n",a);

    int x = 5 , y = 7;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;

    return 0;
}