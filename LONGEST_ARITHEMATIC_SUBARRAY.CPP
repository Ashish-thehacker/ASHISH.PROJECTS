#include<bits/stdc++.h>
using namespace std;

int main(){
    //   0      1     2     3     4     5      6
    //   10     7     4     6     8     10     11
    //      -3    -3     2     2     2      1 
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
    int ans = 2;
    int pd = a[1]-a[0];
    int j=2;
    int curr = 2;
    while(j<n){
        if(a[j] - a[j-1]== pd)
            curr++;
            else
            { //  change the previous difference with current difference
                pd = a[j] - a[j-1];
                curr = 2;
            }
            ans = max(ans, curr);
            j++;
        }
    cout<<ans<<endl;

return 0;
}