#include<bits/stdc++.h>
using namespace std;
// EASY TO UNDERSTAND MERGE SORT(C++)

class Solution{
 public:
//MERGE FUNCTION
 long long int countmerge(long long arr[],long long l,long long m,long long r)
   {
       long long n1=m-l+1;
       long long n2=r-m;
       long long left[n1],right[n2];
       for(long long  i=0;i<n1;i++){
           left[i]=arr[i+l];
       }
       for(long long  i=0;i<n2;i++){
           right[i]=arr[i+m+1];
       }
       long long int i=0,j=0,k=l,res=0;
       while(i<n1 && j<n2){
           if(left[i]<=right[j]){
               arr[k++]=left[i++];
           }
           else{
               arr[k++]=right[j++];
               res=res+(n1-i);
           }
       }
       while(i<n1){
           arr[k++]=left[i++];
       }
       while(j<n2){
           arr[k++]=right[j++];
       }
       return res;
   }
//Solve recursive function to calculate inversions recursively
   long long int solve(long long arr[],long long l,long long r){
       long long int res=0;
       if(l<r){
           long long mid=l+(r-l)/2;
           res+=solve(arr,l,mid);
           res+=solve(arr,mid+1,r);
           res+=countmerge(arr,l,mid,r);
       }
       return res;
   }
//DEFAULT function to return values
   long long int inversionCount(long long arr[], long long N)
   {
       return solve(arr,0,N-1);
   }
};
int main(){
 long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
   

return 0;
}
