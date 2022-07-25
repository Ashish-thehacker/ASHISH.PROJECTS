#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
    // int fib[200] ;
    // int computeFib(int n){
    // if(n == 0 || n== 1)
    // return n;
    // if(fib[n] != -1)
    // return fib[n];
    // int result = fib[n-1] + fib[n-2];
    // fib[n] = result; // memoization
    // return result;
int main(){
// computeFib(5);
int n;
cin>>n;
vi fib(n+1);
fib[1] = 0, fib[2] = 1;
for(int i=2;i<=n;i++){
    fib[i] = fib[i-1] + fib[i-2];
}
cout<<fib[n]<<endl;
return 0;
}