// Example 1: Given a string s, return true if it is a palindrome, false otherwise.
// A string is a palindrome if it reads the same forward as backward. That means, after reversing it, it is still the same string. For example: "abcdcba", or "racecar".
#include <iostream>
#include <string>
using namespace std;

bool isPalindrom(const string &s){
   int left = 0;
   int right = s.length() - 1;
   
   while (left < right)
   {
    if (s[left] != s[right])
    {
        return false;
    }
    left++;
    right--;
   }
   return true;
}

int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    cin>>s;


    if (isPalindrom(s))
    {
        cout<<"The given string is palindrome..."<<endl;
    }
    else{
        cout<<"The given string is not palindrome...."<<endl;
    }
    

    return 0;
}