/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int solve(int left, int right){
                // plan is to make ts recursive and ask it till the ans is given
              
          int mid = left + (right - left) / 2;

          int i = guess(mid);

             if (i == 1) {
                 return solve(mid + 1, right);
                              }

             if (i == -1) {
                 return solve(left, mid - 1);
             }

             return mid;
             }
           
    int guessNumber(int n) {
        if(guess(1)==0)
        return 1;
         if(guess(n)==0)return n;

        
            
        int l =1;
        int r = n;
        return solve(l,r);
        
    }
};