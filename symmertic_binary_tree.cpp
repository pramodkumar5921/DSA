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
    bool trav(TreeNode*root1,TreeNode*root2){
        if(root1==NULL and root2==NULL){
            return 1;
        }
        if(root1==NULL or root2==NULL){
            return 0;
        }
        if(root1->val!=root2->val) return 0;
        
        bool side1=trav(root1->left,root2->right);
        bool side2=trav(root1->right,root2->left);
        
        return side1 and side2;
        
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return 1;
        }
        return trav(root->left,root->right);
    }
};
