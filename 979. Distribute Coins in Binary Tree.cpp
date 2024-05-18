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
    int solve(TreeNode*root,int &ans){
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL and root->right==NULL){
            return root->val-1;
        }
        int left=solve(root->left,ans);
        int right=solve(root->right,ans);

        ans=ans+abs(left)+abs(right);
        return left+right-1+root->val;
    }
    int distributeCoins(TreeNode* root) {
        int ans=0;
         solve(root,ans);
         return ans;
    }
};
