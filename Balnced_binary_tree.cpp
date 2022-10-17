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
    int height(TreeNode*root){
        // base case
        if(root==NULL){
            return 0;
        }
        
        int left_height=height(root->left);
        int right_height=height(root->right);
         return max(left_height,right_height)+1;
        
        
        
    }
    bool isBalanced(TreeNode* root) {
        // base case
        if(!root){
            return true;
        }
        // recursive case
        int left_height=height(root->left);
        int right_height=height(root->right);
        int curr_diff=abs(left_height-right_height);
        if( curr_diff<=1 and isBalanced(root->left) and isBalanced(root->right)){
            return true;
        }
        else{
            return false;
        }
        
    }
};
