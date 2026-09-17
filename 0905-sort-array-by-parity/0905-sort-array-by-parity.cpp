class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int temp = 0 ;
        for (int i = 0 ; i < nums.size() ; i++ ){
            if(nums[i] % 2 == 0){
                    i++;
                 }
            for (int j = nums.size() - 1; j >= i; j--){
                    

                    if(nums[j] % 2 == 0){
                        temp = nums[j];
                        nums[j] = nums[i];
                        nums[i] = temp;

                    }

            }
        }
        return nums;
    }
};