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
    int findBottomLeftValue(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        vector<int> t;
        t.push_back(root->val);
        ans.push_back(t);
        
        while(q.size()>0){
            int n=q.size();
           
            
            vector<int>v;
           for(int i=1;i<=n;i++){

          
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
            ans.push_back(v);
        }
        
        
        return ans[ans.size()-2][0];
    }
};
