#include<bits/stdc++.h>
using namespace std;
// Function to check whether 
// the string is palindrome
string isPalindrome(string s)
{
    // an another string is created to store the reverse of the string 
    string r = s;
    // shortcut to reverse the string 
    reverse(r.begin(), r.end());
    // check that reverse of the string is equal to the original string or not
    if(s==r){
        return "Yes, This is A PALINDROME STRING";
    }
    else{
        return " NO, THIS IS NOT A PALINDROME STRING";
    }
}
int main(){
    string s = "abbbba";
    cout<<isPalindrome(s)<<endl;

return 0;
}