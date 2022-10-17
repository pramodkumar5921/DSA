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
        // recursive case
        int a=height(root->left);
        int b=height(root->right);
        return max(a,b)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // base case
        if(root==NULL){
            return 0;
        }
        // recursive case
        // via root node
        int op1=height(root->left)+height(root->right);
        int op2=diameterOfBinaryTree(root->left);
        int op3=diameterOfBinaryTree(root->right);
        return max(op1,max(op2,op3));
        
    }
};
