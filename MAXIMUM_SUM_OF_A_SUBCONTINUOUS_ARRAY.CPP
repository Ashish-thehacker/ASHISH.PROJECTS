#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
 //Function to find the sum of contiguous subarray with maximum sum.
 long long maxSubarraySum(int arr[], int n){
    long long sum =0;
    long long max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        max_sum = max(sum, max_sum);
        if(sum<0){ // most imp condition for maximum subarray condition
            sum =0;
        }
    }
    return max_sum;
    }
};
int main(){
int t, n;
cin>>t;// input testcases
while(t--)// while testcases exist
{
    cin>>n;// input size of array
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];// inputting elements of array
    }
    Solution ob;
    cout<<ob.maxSubarraySum(a, n)<<endl;
}
return 0;
}