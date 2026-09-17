class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int max = 0;
        int max1 = 0;
        int cur ;
        int les = prices[0];
        for (int i = 1 ; i < len ; i++){
            cur = prices[i];
            max1 = cur - les;
            if(max1 > max){
                max = max1;
            }
            if (les > prices[i] ){
                les = prices[i];
            } }
        return max;
        }
};