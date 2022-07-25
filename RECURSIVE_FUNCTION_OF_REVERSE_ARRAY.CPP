#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, start + 1, end - 1);
}
int main()
{
    int size ;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr,0, size-1);
        for(int i=0;i<size;i++){
            cout<<arr[i];
        }
        cout<<endl;
    
    return 0;
}