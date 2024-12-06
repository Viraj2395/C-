// Vector in C++ (It is resizable array)
#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"Displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";
        // cout<<v.at(i)<< " ";
    }
    cout<<" ";
}

int main(){
    vector<int> vec1;
    vector<char> vec2(4);//4-element charachter vector
    vector<char> vec3(vec2);//4-element charachter vector from vec2
    // vec2.push_back('5');
    // display(vec2);

    display(vec3);


    int element,size = 5;
    // cout<<"Enter the size of vector you want to create : ";
    // cin>>size;
    // for (int i = 0; i < size ;i++)
    // {
    //    cout<<"Enter an element you want to add in this vector : ";
    //    cin>>element;
    //    vec1.push_back(element);
    // }
    // vec1.pop_back();

    
    // display(vec2);

    // vector<int> :: iterator iter = vec1.begin(); //This is iterator Which does same work as a pointer
    // // vec1.insert(iter , 566);
    // // vec1.insert(iter + 1,5/*This will insert 5 copies*/ ,566);//It will insert 566 before 2nd element
    // display(vec1);
    
    vector<int> vec4(6,3);// 6 element vector of 3s
    display(vec4);
    cout<<vec4.size();

    return 0;
}