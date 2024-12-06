#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    // ofstream out;
    // out.open("Sample52.txt");
    // out<<"Hello Cutie";
    // out.close();

    ifstream in;
    string Content;

    in.open("Sample52.txt");
    
    in>>Content;
    cin>>Content;
    cout<<"You are "+ Content << endl;
    in.close();

    return 0;
}
