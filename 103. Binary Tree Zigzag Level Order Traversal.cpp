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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return  ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        vector<int>k;
        k.push_back(root->val);
        ans.push_back(k);
        int level=1;
        while(q.size()>0){
            vector<int>v;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode*temp=q.front();
                q.pop();
                if(temp->left!=NULL){
                    q.push(temp->left);
                    v.push_back(temp->left->val);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                    v.push_back(temp->right->val);
                }
            }
            if(level%2!=0){
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
            else{
                ans.push_back(v);
            }
            level++;

        }
        ans.pop_back();
        return ans;
    }
};
