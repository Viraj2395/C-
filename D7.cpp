//C++ Control Structures, If Else and Switch-Case Statement 
#include <iostream>
using namespace std;

int main(){
  
  int age;
  cout<<"Enter Your age: "<<endl;
  cin>>age;
  //if(age<18)
  //{
  //  cout<<"You can not come to the party";
  //}
  //else if(age==18)
  //{
  //  cout<<"You are just a kid but still can come to the party";
  //}
  //else
  //{
  //  cout<<"You can come to the party";
  //}

   int i;
   cout<<"Enter the value of i : "<<endl;
   cin>>i;
    switch (i)
    {
    case 1:
        cout << "Statement 1" << endl;
        break;
 
    case 2:
        cout << "Statement 2" << endl;
        break;
 
    default:
        cout << "Default statement!" << endl;
    }
  return 0;
}