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
    int Sumofleave(TreeNode*curr, TreeNode*parent){
        if(curr==NULL){
            return 0;
        }

        if(curr->left==NULL and curr->right==NULL){
            if(parent!=NULL and parent->left==curr){
                return curr->val;
            }
        }

        int left=Sumofleave(curr->left,curr);
        int right=Sumofleave(curr->right,curr);

        return left+right;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return Sumofleave(root,NULL);
    }
};
