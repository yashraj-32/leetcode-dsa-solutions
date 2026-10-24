class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        momo(0,temp, ans, nums);
        return ans;
    }
    void momo(int i,vector<int>temp,vector<vector<int>>& ans , vector<int>nums){
        if(i==nums.size()){
                ans.push_back(temp);
                return;
            }
        if(i == 0 ){
            momo(i + 1,temp,ans,nums);
            temp.push_back(nums[i]);
         i++;
            momo(i,temp,ans,nums);
            
        }
        else{
            
            
            momo(i + 1,temp,ans,nums);

            temp.push_back(nums[i]);
        i++;
            momo(i,temp,ans,nums);
            

        }

    }
};