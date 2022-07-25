class Solution{   
public:
    int median(vector<vector<int>> & matrix, int r, int c){
        // code here  
        int low = INT_MAX, high = INT_MIN;
        // finding minimum and maximum element
        for(int i=0;i<r;i++){
            low = min(low, matrix[i][0]);
            high = max(high, matrix[i][c-1]);
        }
        int median = low;
        int medianposition = (r*c+1/2);
        while(low<=high){
            int mid = low + (high - low)/2;// for index
            int count = 0;
            // count the index of the number of element less than mid {[index -1] -0}+1
            for(int i=0;i<r;i++){
               int index = upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
               count += ((index- 1)+0)+1;
            }
            // if number of element is less than mid value
            if(count < medianposition){
                low = mid + 1;
                median = low;
            }
            else{
                high = mid - 1;
            }
            return median;
        }
    }
};    
    
    
    
    
    
    
    
    
  
  
  
  
  
  
  
  