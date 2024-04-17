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
     vector<string>ans;
    void dfs(TreeNode*root,string temp){
        if(root==NULL){
            return;
        }
        temp=char(root->val+'a')+temp;
        if(root->left==NULL and root->right==NULL){
            ans.push_back(temp);
            return;
        }
        dfs(root->left,temp);
        dfs(root->right,temp);
        return;
    }
    string smallestFromLeaf(TreeNode* root) {
        dfs(root,"");
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};
