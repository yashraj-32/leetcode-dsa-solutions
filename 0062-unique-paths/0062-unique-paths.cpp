class Solution {
public:
    int uniquePaths(int m, int n) {
        //prep for actual sol code
        vector<vector<int>> arr(m,vector<int>(n,-1));
           for (int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                arr[i][j] = 0;
            }}
            //made an array of 0 elements acc to input
            arr[m-1][n-1]=1;
            // gave the right bottom element 1 value
        int i = 0 ;
        int j = 0 ;
       return momo(i,j,m,n,arr);
    }
        int momo(int i , int j,int m ,int n , vector<vector<int>>&arr){
            if(arr[i][j]!=0)return arr[i][j];
            //if we find preexisting ans in the matrix we use that
            if(i == m-1 && j == n-1){
                return 1;
            }
            //reached right bottom element
            if(i+1 < m ){
                arr[i][j] += momo(i+1 , j ,m,n, arr);
            }
            //adds value of element right to it in the matrix
            if(j + 1 < n ){arr[i][j] += momo(i, j + 1,m,n, arr);
            }
             //adds value of element below it in the matrix
            return arr[i][j];
            // returns the final value at 0,0 elements of matrix

        }

};