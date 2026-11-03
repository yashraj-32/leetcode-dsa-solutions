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
    int maxDepth(TreeNode* root) {
        if(root == NULL)return 0;
        
       return depth( 1 , root);
    }
    int depth( int num , TreeNode* root){
        if(root == NULL)return 0;
        if( root->left == NULL && root->right == NULL)return 1;
        int l = depth(num , root->left);
        int r = depth(num , root->right);
        return 1 + max (l,r) ;
    }
};