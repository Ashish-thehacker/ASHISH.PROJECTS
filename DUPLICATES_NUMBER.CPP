#include<bits/stdc++.h>
using namespace std;

class Solution{
public : 
int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            if(nums[j] == nums[i])
                return nums[i];
        }
        return -1;
    }
}
};

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    Solution ob;
    auto ans = ob.findDuplicate(nums);
    cout<<ans<<endl;
}
return 0;
}
