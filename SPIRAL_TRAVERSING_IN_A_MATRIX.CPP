#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 

    vector<int> spirallyTraversal(vector<vector<int>> matrix , int r, int c){
        vector<int> ans;
        int cnt =0;
        int total =  r * c;
        int startingRow = 0;
        int startingClm = 0;
        int endingRow = r-1;
        int endingClm = c-1;

        while(cnt<total){
            for(int index = startingClm; index  <= endingClm && cnt < total;index++){
                ans.push_back(matrix[startingRow][index]);
                cnt++;
            }
            startingRow++;
            for(int index  = startingRow; index <= endingRow && cnt <total;index++){
                ans.push_back(matrix[index][endingClm]);
                cnt++;
            }
            endingClm--;
            for(int index = endingClm; index >= startingClm && cnt < total;index--){
                ans.push_back(matrix[endingRow][index]);
                cnt++;
            }
            endingRow--;
            for(int index = endingRow; index >= startingRow && cnt <total; index --){
                ans.push_back(matrix[index][startingClm]);
                cnt++;
            }
            startingClm++;
        }
        return ans;

    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int r, c;
        cin>>r>>c;
        vector<vector<int>>matrix(r);
        for(int i=0;i<r;i++)
        {
            matrix[i].assign(c, 0);
            for(int j=0;j<c;j++){
                cin>>matrix[i][j];
            }
        }
        Solution ob;
        vector<int> result = ob.spirallyTraversal(matrix, r, c);
        for(int i=0;i<result.size();++i)
        cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}