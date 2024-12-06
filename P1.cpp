// Write a program that prompts the user for a number and checks if it is prime. If it is prime, print "Prime", otherwise print "Not prime".
#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;

    for (int i = 2; i <= (n/2); i++)
    {
        if(n % i == 0); return false;
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;

    if(isPrime(num)){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"Not prime"<<endl;
    }
    return 0;
}