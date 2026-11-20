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
    bool isValidBST(TreeNode* root) {
           if (root == NULL)return true;
        
        return momo(root ,LLONG_MIN , LLONG_MAX );
        
        
    }
    bool momo(TreeNode* root , long long min ,long long max){
        if (root == NULL)return true;
        if(root->val > min && root->val < max){
           if( momo(root->left , min , root->val)){
            return momo(root->right , root->val , max);
            }
            return false;
        }
        return false;


    }
};