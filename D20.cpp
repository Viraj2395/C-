//Static Data Members & Methods in C++ OOPS 
#include <iostream>
using namespace std;

class employee{
    private: 
      int id;
      static int count;
    public:
      void setdata(){
        cout<<"Enter your id:-"<<endl;
        cin>>id;
        count++;
      }
      void getdata(){
        cout<<"The id of emlpoyee is "<<id<< "and this is employee number"<<count<<endl;
      }
       static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

int employee :: count;


int main(){
 employee Viraj;
 Viraj.setdata();
 Viraj.getdata();
 employee :: getCount();
}