// List In C++ STL(A list is a bi-directional linear storage of elements)
// It gives faster insertion and deletion opertaion
// its access to a ramdom element slow
#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    
}

int main(){
    list<int> list1; //List of 0 lenth
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(8);
    list1.push_back(12);

    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);

    // list1.remove(7);
    // display(list1);
    
    display(list1);
    list1.sort();
    cout<<endl;
    display(list1);
    
    // list<int> list2(3);//empty list of lenth 3
    // list<int> :: iterator it = list2.begin();

    // *it = 1;
    // it++;
    // *it = 3;
    // it++;
    // *it = 15;
    // it++;
    // display(list2);


    return 0;
}