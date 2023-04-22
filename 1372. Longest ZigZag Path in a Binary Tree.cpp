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
    int longestZigZag(TreeNode* root) {
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        int maxi=0;
        while(q.size()>0){
            TreeNode*node=q.front().first;
            int lenleft=q.front().second.first;
            int lenright=q.front().second.second;
            maxi=max({maxi,lenleft,lenright});
            q.pop();
            if(node->left){
                q.push({node->left,{lenright+1,0}});
            }
            if(node->right){
                q.push({node->right,{0,lenleft+1}});
            }
        }
        return maxi;
    }
};
