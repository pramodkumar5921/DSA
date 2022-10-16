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
        if(root==NULL) return 0;
        if(root->right==NULL and root->left==NULL){
            return targetSum==root->val;
        }
        
        // recursive case
        bool t1,t2;
        if(root->left){
            t1=hasPathSum(root->left,targetSum-root->val);
        }
        if(root->right){
            t2=hasPathSum(root->right,targetSum-root->val);
        }
        if(t1 or t2){
            return true;
        }
        
            return false;
        
    }
};
