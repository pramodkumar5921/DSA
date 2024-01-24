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
    int ans=0;
    void solve(TreeNode*root,vector<int>&freq){
        if(root==nullptr){
            return;
        }
        freq[root->val]++;
        if(root->left==nullptr and root->right==nullptr){
            int cnt=0;
            for(int i=1;i<=9;i++){
                if(freq[i]%2!=0){
                    cnt++;
                }
            }
            if(cnt<=1){
                ans++;
            }
        }
        solve(root->left,freq);
        solve(root->right,freq);
        freq[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>freq(10,0);
        solve(root,freq);
        return ans;
    }
};
