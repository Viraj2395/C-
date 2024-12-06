// File I/O in C++: open() and eof() functions
#include <iostream>
#include <fstream>
 
using namespace std;

/* 
int main()
{
    // declaring an object of the type ofstream
    ofstream out;

    //connecting the object out to the text file using the member function open()
    out.open("sample60.txt");
 
    //writing to the file
    out <<"This is me\n";
    out <<"This is also me";
    //closing the file connection
    out.close();

    return 0;
}
*/

int main(){

    ifstream in;
    string st;

    in.open("Sample52.txt");

    while (in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;   
    }
    
    return 0;
}
