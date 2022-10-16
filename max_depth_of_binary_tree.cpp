class Solution {
public:
    int maxDepth(TreeNode* root) {
        // base case
        if(root==NULL){
            return 0;
        }
        
        // recursive case
        int left_height=maxDepth(root->left);
        int right_height=maxDepth(root->right);
        return max(left_height,right_height)+1;
        
    }
};
