// File I/O in C++: Reading and Writing Files
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    // string v = "Viraj Hello";
    // Opening files using constructor and writing it
    // ofstream out("Sample52.txt");
    // out<<v;

    string v2;
    // opening files using constructor an d reading it
    ifstream in("Sample52b.txt");
    in>>v2;
    getline(in, v2);
    cout<<v2;

    return 0;
}
   