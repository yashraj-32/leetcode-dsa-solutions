class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i = 0;
    while(i<nums.size()){
        for (int j = 1 ; j<=nums.size() - 1; j+=2){
            if(nums[i] % 2 == 0 && nums[j] % 2 == 1 ){
                i+=2;
                break;
            }
            if(nums[i] % 2 != 0 && nums[j] % 2 != 1 ){
                swap(nums[i] , nums[j]);
               i+=2;
                break;
            }
            if(nums[i] % 2 == 0 && nums[j] % 2 != 1 ){
                
                
                continue;
            }
             if(nums[i] % 2 != 0 && nums[j] % 2 == 1 ){
             
                
                continue;
            }


        }}
    
        return nums;
    }
    
};