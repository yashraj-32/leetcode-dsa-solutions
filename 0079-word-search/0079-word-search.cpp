class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
       
        int xmax =board.size() - 1;
        int ymax = board[0].size() - 1 ;
        bool ans;
        for(int i = 0 ; i <= xmax ; i++  ){
            for (int j = 0 ; j <= ymax; j++){
                if(board[i][j] == word.front()){
                    ans = momo(xmax, ymax , i , j ,board, word );
                    if ( ans == true)return true;
                }
            }
        }
        return false;
        
    }
    bool momo(int xmax , int ymax, int i , int j , vector<vector<char>>& board, string word ){
        if(word.size()==0)return true;
        if(board[i][j] == word.front()){
            word.erase(0,1);
            
        if (word.empty()) return true;
        char original = board[i][j];
            board[i][j] = '0';
            
            if( i + 1 <= xmax &&  board[i + 1][j] != '0' ){
              if(  momo(xmax, ymax , i + 1 , j,board , word ) == 1){
                board[i][j] = original;
                return 1;}
              
              
            }
            if( i - 1 >= 0 &&  board[i - 1][j] != '0'){
              if(  momo(xmax, ymax , i - 1 , j ,board, word )== 1){
                board[i][j] = original;
                return 1;}
             
            }
            if( j + 1 <= ymax &&  board[i][j + 1] != '0'){
               if( momo(xmax, ymax , i  , j + 1 ,board, word )== 1){
                board[i][j] = original;
                return 1;}
               
            }
            if( j - 1 >= 0 &&  board[i][j - 1] != '0' ){
              if(  momo(xmax, ymax , i , j - 1 ,board, word )== 1 ){
                board[i][j] = original;
                return 1;}
              
            }
            board[i][j] = original;
        }
       
        else return 0;
        
        return 0;


    }
};