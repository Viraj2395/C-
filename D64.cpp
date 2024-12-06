// Function Objects(functors) In C++ STL
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
    // Function Objects (functor) : A function wrapped in a class so that it is available like an object
    int arr[] = {1,45,57,2,35,8,5,48};
    // sort(arr,arr+8);
    sort(arr, arr+8, greater <int> ());
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}