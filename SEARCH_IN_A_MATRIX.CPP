#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
            for(int i=0;i<(int)matrix.size();++i){
                if(binary_search(matrix[i].begin(),matrix[i].end(), target))
                    return 1;
                    cout<<target<<"element found!!!";
            }
        return 0;
    }
};
    
int main(){
   vector<vector<int>> vect;
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cin >> vect[i][j];
        }    
        cout << endl;
    }
    int t;
    cin>>t;
    Solution mat;
    mat.searchMatrix(vect, t);
    
    
    
    
    

return 0;
}