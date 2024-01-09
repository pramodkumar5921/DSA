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
      void solve(TreeNode*root,vector<int>&temp1){
        if(root->left==nullptr and root->right==nullptr){
            temp1.push_back(root->val);
            return;
        }
        if(root->left!=nullptr){
        solve(root->left,temp1);
        }
        if(root->right!=nullptr){
        solve(root->right,temp1);
        }
     }
     void solve1(TreeNode*root,vector<int>&temp2){
        if(root->left==nullptr and root->right==nullptr){
            temp2.push_back(root->val);
            return;
        }
        if(root->left!=nullptr){
        solve(root->left,temp2);
        }
        if(root->right!=nullptr){
        solve(root->right,temp2);
        }
     }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>temp1,temp2;
        solve(root1,temp1);
        solve1(root2,temp2);
        return temp1==temp2;
    }
};
