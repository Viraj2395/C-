// Member Function Templates & Overloading Template Functions in C++
#include <iostream>
using namespace std;

template <class T>
class Viraj
{
public:
    T data;

    Viraj(T a)
    {
        data = a;
    }
    void display();
};

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

template <class T>
void Viraj<T>::display()
{
    cout << data << endl;
}

int main()
{
    // Viraj <float> v(3.6);
    // Viraj <int> v(3);
    Viraj<char> v('c');

    cout << v.data << endl;
    v.display();

    func(4);
    
    return 0;
}

