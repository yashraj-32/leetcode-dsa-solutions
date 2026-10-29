class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
         vector<vector<string>> ans;
       vector<string> temp(n, string(n, '.'));
        int n1 =n;
        
        //gonna check every point as starting point
       momo(n, 0, 0, n, ans, temp);
        return ans;
    }
    
    void momo(int n1,int i , int j ,int n , vector<vector<string>>& ans , vector<string> temp ){
     
       
        if (i == n){
            ans.push_back(temp);
            return;
        } 
        for(int g = 0 ; g < n ; g++){
                if(check(n1 , i,g ,temp)){
                     temp[i][g] = 'Q';
                    momo(n1,i+1,g,n,ans,temp);
                     temp[i][g] = '.';
                }
            }
        
      
    }
    //checks 1. if the given index is in confines of array 
    //       2. if its safe from other queens
    bool check(int n,int i , int j ,vector<string> temp  ){
        //1.complete
         if(i < n && j < n && i >= 0 && j >= 0){
                //horizontal and vertical check
                for (int x = 0; x < n; x++){
                    if(temp[i][x] == 'Q')return 0;
                }
                for (int x = 0; x < n; x++){
                    if(temp[x][j] == 'Q')return 0;
                }
                //diagonal check
                for(int x = i , y = j; 0 <= x && 0 <= y && x<n && y<n ;
                x++,y++){
                    if(temp[x][y] == 'Q')return 0;
                }
                for(int x = i , y = j; 0 <= x && 0 <= y && x<n && y<n ;
                x--,y--){
                    if(temp[x][y] == 'Q')return 0;
                }
                for(int x = i ,  y = j; 0 <= x && 0 <= y && x<n && y<n ;
                x++,y--){
                    if(temp[x][y] == 'Q')return 0;
                }
                for(int x = i ,  y = j; 0 <= x && 0 <= y && x<n && y<n ;
                x--,y++){
                    if(temp[x][y] == 'Q')return 0;
                }
                return true;
         }
        else return 0;
    }

};