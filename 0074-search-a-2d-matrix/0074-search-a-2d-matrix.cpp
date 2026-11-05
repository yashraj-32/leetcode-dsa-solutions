class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        if (target > matrix[m - 1][n - 1])return false;
        int high = m - 1, low = 0 ;
        while(low <= high){
            int mid = (high + low)/ 2;
            if(target == matrix[mid][0]) return true;
          
            if(target > matrix[mid][0]){
            low = mid + 1;}
            if(target <  matrix[mid][0]){
            high = mid - 1;}
       
        } int row = high;
        if(row < 0) return false;
        
        high = n - 1, low = 0;
        
          while(low<=high){
             int mid = (high + low)/ 2;
            if(matrix[row][low] == target || matrix[row][high]== target ||
            target == matrix[row][mid])return true;
           
           
            if(target > matrix[row][mid]){
            low = mid + 1;}
            if(target <  matrix[row][mid]){
            high = mid - 1;}
          }
        return false;
    }
};