class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int siz = nums.size();
     vector<int> ans;
        for(int i =  0 ; i < siz ; i++){
            if(nums[i] == nums[nums[i]-1]){
                continue;
            }
            else if (nums[i] != nums[nums[i]-1]){
                swap (nums[i] , nums[nums[i]-1]);
                i--;
                continue;
            }
            
            
         }
         for(int i =  0 ; i < siz ; i++){
          if( nums[i] != i+1){
                ans.push_back(i+1);

                continue;
            }
         }  
        
        return ans;
        
        
    }
};