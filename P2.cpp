// Create a recursive function that calculates the factorial of a given number. Write a main function that prompts the user for a number and displays the factorial.
#include <iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int num;
    cout<<"Enter the number you want factorial of : "<<endl;
    cin>>num;

    cout<<"The factorial of "<< num << " is "<<factorial(num);

    return 0;
}