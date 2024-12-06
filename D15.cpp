//Recursions & Recursive Functions in C++ |
#include <iostream>
using namespace std;

int fectorial(int n){
    if(n<=1)
    {
        return 1;

    }
    return n * fectorial(n-1);
}

int fibonacci(int n)
{
  if(n<2){
    return 1;
  }
  return fibonacci(n - 2) + fibonacci(n - 1);
}
int main(){
    int a;
    //cout<<"Enter the number you want fectorial of : "<<endl;
    //cin>>a;
    //cout<<"The fectorial of "<< a <<" is "<<fectorial(a)<<endl;

    cout<<"Enter the number for fibonacci series you want to create"<<endl;
    cin>>a;
    cout<<"The fibonacci series of "<< a<< "is"<< fibonacci(a) << endl;
    
    return 0;
}