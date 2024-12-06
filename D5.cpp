//C++ Reference Variables & Typecasting
#include <iostream>
using namespace std;

int c = 34;

int main(){
   // int a,b,c;
   // cout<<"Enter the value of a"<<endl;
   // cin>>a;
   // cout<<"Enter the value of b"<<endl;
   // cin>>b;
   // cout<<"Enter the value of c"<<endl;
   // cin>>c;
   // cout<<a<<endl<<b<<endl<<c<<endl;
   
   // cout<<"The value of c outside this function is "<<::c<<endl;

   //********* Float , Double and Long double literals **************
   //float d = 34.4f;
   //long double e = 34.4l;
   //cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
   //cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
   //cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
   //cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
   //cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
   //cout<<"The value of d is "<<d<<endl;
   //cout<<"The value of e is "<<e<<endl;

   //************ Reference variable **************** 
   int x = 45;
   int & y = x; 
   cout<<x<<endl;
   cout<<y<<endl;
   
   // //*********** Type Casting **************** 
   int a = 45;
   float b = 45.56;

   cout<<"The value of a is "<<(float)a<<endl;
   cout<<"The value of a is "<<float(a)<<endl;

   cout<<"The value of b is "<<(int)b<<endl;
   cout<<"The value of b is "<<int(b)<<endl;

   int c = int(b);
   cout<<"The expression is "<<a + b<<endl;
   cout<<"The expression is "<<a + int(b)<<endl;
   cout<<"The expression is "<<a + (int)b<<endl;

   
   return 0;
}
