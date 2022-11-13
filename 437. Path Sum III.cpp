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
void solve(TreeNode*root,int targetSum,int &ans,vector<int>path){
    if(root==NULL){
        return ;
    }
    path.push_back(root->val);
    solve(root->left,targetSum,ans,path);
    solve(root->right,targetSum,ans,path);
    long long sum=0;int n=path.size();
    for(int i=n-1;i>=0;i--){
        sum+=path[i];
        if(sum==targetSum){
            ans++;
        }
    }
    path.pop_back();
}
    int pathSum(TreeNode* root, int targetSum) {
        int ans=0;
        vector<int>path;
        solve(root,targetSum,ans,path);
        return ans;
    }
};
