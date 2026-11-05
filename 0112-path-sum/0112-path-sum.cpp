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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL)return 0 ;
        int temp = root->val ;
        if (momo(root->left , temp , targetSum))return true;
        if (momo(root->right , temp , targetSum))return true;
        if(root->left == NULL && root->right ==NULL && root->val == targetSum)return true;
        return false;
    }

    bool momo(TreeNode* root , int sum , int devfest){
        if(root == NULL)return false;
         sum += root->val; 
        if(root->left == NULL && root->right == NULL && sum == devfest)
    return true;
        if(momo(root->left , sum ,devfest)) return true;
       if( momo(root->right , sum , devfest))return true;
        return false;
    }
};