//Array of Objects & Passing Objects as Function Arguments in C++
/*#include <iostream>
using namespace std;

class employee{
    int id;
    int salary;

 public:
    void setId(void){
        cout<<"Enter Your Id: "<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"Your id is : "<<id << endl;
    }
};


int main(){
   employee Insta[4];
   for (int i = 0; i < 4; i++)
   {
      Insta[i].setId();
      Insta[i].getId();
   }
   
     return 0;


}*/

#include <iostream>
using namespace std;

class complex{
   int a;
   int b;

   public:
     void setdata(int v1,int  v2)
     {
        a = v1;
        b = v2;
     }

     void SetDataBySum(complex o1, complex o2)
     {
       a = o1.a + o2.a;
       b = o1.b + o2.b;
     }

     void PrintNum(){
        cout<<"The value of complex num is "<< a <<" + " << b<<"i"<< endl;;
     }
};

int main(){

    complex c1, c2, c3;

    c1.setdata(5,2);
    c1.PrintNum();

    c2.setdata(6,3);
    c2.PrintNum();

    c3.SetDataBySum(c1,c2);
    c3.PrintNum();

   return 0;
}
