#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void move(vector<int> & arr)
{ // shortcut the sort the string 
    sort(arr.begin(), arr.end());
}

int main(){
    vector<int> arr = {-11,2,5,3,6,-5,6,4,2,-2,3};
    move(arr);
    for(int e: arr)
    cout<<e<<" ";
    

return 0;
}