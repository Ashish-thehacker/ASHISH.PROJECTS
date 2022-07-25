#include<bits/stdc++.h>
using namespace std;




// Your Code Here
// BRUTE FORCE APPROCH TAKES TIME COMPLEXITY O(n^2)
// int inversion =0;
// for(int i=0;i<N-1;i++){
//     for(int j=i+1;j<N;j++){
//         if(arr[i]>arr[j]){
//             inversion++;
//         }
//     }
// }
// return inversion;
// FOR THE TIME COMPLEXITY O(nlogn)
class Solution{

public:


    int merge1(int a[], int temp[], int left, int right, int mid)
    {
        int i, j, k, count_inversion = 0;
        i = left;
        j  = mid;
        k = left; // this variable is for k
        while ((i <= mid - 1) and (j <= right))
        {
            if (a[i] <= a[j])
            {
                temp[k++] = a[j++];
            }
            else
            {
                temp[k++] = a[j++];
                count_inversion += (mid - i);
            }
        }
        while (i <= mid - 1)
        {
            temp[k++] = a[j++];
        }
        while (j <= right)
        {
            temp[k++] = a[j++];
        }
        for (int m = left; m <= right; m++)
        {
            a[m] = temp[m];
        }
        return count_inversion;
    }
    long long int mergesort(long long a[], int temp[], int left, int right)
    {
        int count_inversion = 0;
        if (left < right)
        {
            int mid = (left + right) / 2;
            count_inversion += mergesort(a, temp, left, mid);
            count_inversion += mergesort(a, temp, mid + 1, right);
            count_inversion += merge1(a, temp, left, mid + 1, right);
        }
        return count_inversion;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        return mergesort(a,temp, )
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
