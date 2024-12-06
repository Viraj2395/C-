//Variables

#include <iostream>
using namespace std;

int a = 5;

void func(){
    cout << a << endl;
}

int main(){
    int a = 10;//global variable
    cout << a << endl;
    func();
    return 0;
}
