#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    vector<int> commonELements(int A[], int B[], int C[], int n1,int n2, int n3)
    {// code here
    
        
    }
}
int main(){
int t ;
cin>>t;
while(t--){
    int n1, n2 , n3;
    cin>>n1>>n2>>n3;
    int A[n1];
    int B[n2];
    int C[n3];
    for(int i=0;i<n1;i++)cin>>A[i];
    for(int i=0;i<n1;i++)cin>>A[i];
    for(int i=0;i<n1;i++)cin>>A[i];
  
    Solution ob;
    vector <int> res = ob.commonElements (A, B, C,n1, n2, n3);
    if(res.size()== 0)
    cout<<-1;
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
        cout<<endl;
    }
}
return 0;
}