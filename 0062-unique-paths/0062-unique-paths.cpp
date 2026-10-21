class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> arr(m,vector<int>(n,-1));
           for (int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                arr[i][j] = 0;
            }}
            arr[m-1][n-1]=1;
        int i = 0 ;
        int j = 0 ;
       return momo(i,j,m,n,arr);
    }
        int momo(int i , int j,int m ,int n , vector<vector<int>>&arr){
            if(arr[i][j]!=0)return arr[i][j];
            if(i == m-1 && j == n-1){
                return 1;
            }
            if(i+1 < m ){
                arr[i][j] += momo(i+1 , j ,m,n, arr);
            }
            if(j + 1 < n ){arr[i][j] += momo(i, j + 1,m,n, arr);
            }
            return arr[i][j];

        }

};