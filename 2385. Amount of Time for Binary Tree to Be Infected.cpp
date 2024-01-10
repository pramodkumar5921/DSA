/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<int,vector<int>>mp;
    void solve(TreeNode*root,int parent){
        if(root==nullptr){
            return;
        }
        if(parent!=-1){
            mp[root->val].push_back(parent);
        }
        if(root->left!=NULL){
            mp[root->val].push_back(root->left->val);
        }
        if(root->right!=NULL){
            mp[root->val].push_back(root->right->val);
        }
        solve(root->left,root->val);
        solve(root->right,root->val);
    }
       

    int amountOfTime(TreeNode* root, int start) {
        solve(root,-1);
        unordered_map<int,int>vis;
        for(auto it:mp){
            vis[it.first]=0;
        }
        queue<int>q;
        int cnt=0;
        q.push(start);
        while(q.size()>0){
            int x=q.size();
            while(x--){
                int node=q.front();
                vis[node]=1;
                q.pop();
                for(auto child:mp[node]){
                    if(child != -1 and vis[child]==0){
                        q.push(child);
                    }
                }
            }
            cnt++;
        }
        return cnt-1;
    }
};
