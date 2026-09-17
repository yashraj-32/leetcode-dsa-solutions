// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        bool flag = true;
        int j = 0;
        if(n == 1){
            return 1;
        }
     for (int i = n ; flag == true && i>=0 ; i--){
          
           flag = isBadVersion(i);
          
        
          
           if(flag == false){
               j = i+1;
               break;
            }
            
          
           
         }
        return j;
    }
};