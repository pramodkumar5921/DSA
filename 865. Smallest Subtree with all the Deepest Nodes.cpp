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
    int solve(TreeNode*root){
        if(root== NULL){
            return 0;
        }
        int left=solve(root->left);
        int right=solve(root->right);
        return max(left,right)+1;
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {

    int left=solve(root->left);
    int right=solve(root->right);
    TreeNode* ans1;
    if(left==right){
        return root;
    }
    if(left>right){
         ans1=subtreeWithAllDeepest(root->left);
    }
    else{
        TreeNode* ans2= subtreeWithAllDeepest(root->right);
    }
    return ans1;
    }
};
