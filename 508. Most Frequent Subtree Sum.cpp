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
unordered_map<int,int>mp;
  int  solve(TreeNode*root){
          if(root==NULL){
              return 0;
            }
          
            int a=solve(root->left);
            int b=solve(root->right);
            int res=a+b+root->val;
            mp[res]++;
            return res;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int>ans;
        solve(root);
        int min=0;
        for(auto it:mp){
            if(it.second>min){
                min=it.second;
            }
        }
        for(auto it:mp){
            if(it.second==min){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
