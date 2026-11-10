/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        int tsum = 0;
        if(root == NULL)return ans;
        if(root->left == NULL && root->right == NULL && root->val == targetSum){
             temp.push_back(root->val);
             ans.push_back(temp);
             return ans;
        }
        momo(root , targetSum , ans, temp , tsum);
        return ans;

        
    }
    void momo(TreeNode* root, int sum , vector<vector<int>>& ans,vector<int> temp , int tsum){
         if(root == NULL)return;

         temp.push_back(root->val);

          tsum += root->val;
          
          if( root->left == NULL && root->right == NULL && tsum == sum ) {
            ans.push_back(temp);
            return;}
            
            momo(root->right , sum , ans, temp , tsum);
            momo(root->left , sum , ans, temp , tsum);
         return;

    }
};