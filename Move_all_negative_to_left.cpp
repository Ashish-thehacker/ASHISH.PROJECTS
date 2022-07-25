#include<bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n)
{
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=j)
            swap(arr[i], arr[j]);
            j++;// isse positive right side ajaane 
        }
    }
}
// a utility function to print an array
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {-1,2,-3,5,-4,6,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}