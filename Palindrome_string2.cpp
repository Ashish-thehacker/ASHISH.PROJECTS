#include<bits/stdc++.h>
using namespace std;
string ispalindrome(string s)
{
    // Iterate over the string over the range [0,N/2]
    for(int i=0;i<s.length()/2;i++){
        // if s[i] != is not equal to s[N-i-1]
        if(s[i]!= s[s.length()-i-1]){
            //Return no
            return "NO";
        }
    }
    // otherwise
    // RETURN YES
    return "YES";
}
int main(){
string s = "anna";
cout<<ispalindrome(s);
return 0;
}