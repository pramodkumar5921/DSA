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
    int result=INT_MIN;
    int Diameter(TreeNode*root){
        if(root==nullptr){
            return NULL;
        }
        int rightMove=Diameter(root->right);
        int leftMove=Diameter(root->left);
        return 1+max(rightMove,leftMove);
    }
    void FindNode(TreeNode*root,vector<TreeNode*>&Node){
        if(root==nullptr){
            return;
        }
        Node.push_back(root);
        FindNode(root->left,Node);
        FindNode(root->right,Node);
        return;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        vector<TreeNode*>Node;
        FindNode(root,Node);
        for(auto it:Node){
            int op1=Diameter(it->left)+Diameter(it->right);
            int op2=Diameter(it->right);
            int op3=Diameter(it->left);
            result=max({result,op1,op2,op3});
        }
        return result;
    }
};
