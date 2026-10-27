class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        momo(nums, ans, temp );
        return ans;

    }

    void momo(vector<int> nums, vector<vector<int>>& ans , vector<int> temp){
        if(temp.size() == nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(find(temp.begin() , temp.end(), nums[i]) == temp.end()){
                temp.push_back(nums[i]);
                momo(nums,ans,temp);
                temp.pop_back();

            }
        }

        
        
    }
};