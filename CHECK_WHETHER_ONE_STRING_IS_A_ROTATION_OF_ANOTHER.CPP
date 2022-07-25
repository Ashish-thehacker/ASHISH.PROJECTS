#include<bits/stdc++.h>
using namespace std;
// 
int main(){
string s1, s2;
cin>>s1>>s2;
int l1 = s1.length();
int l2 = s2.length();
if(l1!= l2) cout<<"NO";
else{
    string temp = s1 + s1;
    if(temp.find(s2) != string :: npos){
        cout<<"YES, strings are rotation of each other ";
    }
    else{
    cout<<"no, strings are not rotation of each other";
}
}
return 0;
}


