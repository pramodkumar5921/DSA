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
    int getMinimumDifference(TreeNode* root) {
        vector<int>v;
        queue<TreeNode*>q;
        q.push(root);
        if(root==NULL){
            return NULL;
        }
        while(!q.empty()){
            TreeNode*temp=q.front();
            q.pop();
            v.push_back(temp->val);
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
        sort(v.begin(),v.end());
        int min=INT_MAX;
        for(int i=0;i<v.size()-1;i++){
            int temp=abs(v[i]-v[i+1]);
                if(temp<min){
                    min=temp;
    }
        }
            return min;
    }
        
        
};
