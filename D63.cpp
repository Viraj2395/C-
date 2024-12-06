// Map in c++
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<string, int> markMap;
    markMap["Viraj"] = 98;
    markMap["Janet"] = 8;
    markMap["Sahil"] = 70;
    markMap["Parth"] = 65;
    markMap["Viru"] = 30;

    // markMap.insert( { {"Rohan", 67} ,{"Aakash",43} });
    // It's correct but not working for some reasons
    
    map<string, int> :: iterator it;
    for (it = markMap.begin(); it!= markMap.end(); it++)
    {
        cout<<(*it).first <<" "<<(*it).second<<"\n";
    }

    return 0;
}

