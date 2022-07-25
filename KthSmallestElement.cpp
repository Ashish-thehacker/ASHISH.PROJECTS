#include<bits/stdc++.h>
using namespace std;
// Simple C++ program to find k'th smallest element
// Function to return k'th smallest element in a given array
class Solution{
    public:

int kthSmallest(int arr[], int n, int k)
{
    // sort the given array
    sort(arr, arr+n);

    // Return KTH ELEMENT IN THE SORTED ARRAY
    return arr[k-1];
}
}; // class banane ke baad hamesha semicolon lagaye semicolon lagana na bhule
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int k;
    cin>>k;
    Solution ob;
    cout<<ob.kthSmallest(a,n,k)<<endl;
   }
return 0;
}