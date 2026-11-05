class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        int max1 = 0;
        int max2 = max1;
        int m1in  = -1;
        int m2in = -1;
        while(true){
            for(int i = 0 ; i <stones.size() ; i++){
                if(stones[i] > max1 && stones[i] != 0){
                    max1 = stones[i];
                    m1in = i;
                }
            }
                for(int i = 0 ; i <stones.size() ; i++){
                if(stones[i] > max2 && i != m1in && stones[i] != 0){
                    max2 = stones[i];
                m2in = i;
                }
               
            }
              if(max2 == 0) return max1;
            if (max1 == max2){
                stones[m1in] = 0;
                stones[m2in] = 0;
            }
            if(max1 < max2){
                stones[m1in] = 0;
                stones[m2in] = max2 - max1;
            }
              if(max1 > max2){
                stones[m2in] = 0;
                stones[m1in] = max1 - max2;
            }
            
         max1 =0;
         max2 = max1;
         m1in  = -1;
         m2in = -1;
        
        }
        return stones[0];
    }
};