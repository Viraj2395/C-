// Revisiting Pointers: new and delete Keywords in CPP
#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int* ptr = &a;
    *ptr = 999;

    cout<<"The value of a is "<<*(ptr)<<endl;
    cout<<"The address of a is "<<&(ptr)<<endl;

    // New Keyword
    int * p = new int(40);
    // float * p = new float(40.78);
    cout << "The value at address p is "<< *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    // delete[] arr; 
    cout << "The value at address 1 is "<< arr[0] << endl;
    cout << "The value at address 2 is "<< arr[1] << endl;
    cout << "The value at address 3 is "<< arr[2] << endl;

    // Delete Operator

    return 0;
}