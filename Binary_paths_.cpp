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
    void pathshelper(TreeNode*root,vector<string>&v,string s){
        if(root==NULL){
            return;
        }
        if(!root->left and !root->right){
            s=s+to_string(root->val); // only last node
            v.push_back(s);
        }
          s=s+to_string(root->val)+"->"; // all the node instead of last node
          pathshelper(root->left,v,s);
          pathshelper(root->right,v,s);
        
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>v;
        string s="";
        pathshelper(root,v,s);
        return v;
    }
};
