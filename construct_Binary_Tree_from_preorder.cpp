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
    int preint=0;
    TreeNode*helper(vector<int>& preorder, vector<int>& inorder,int is,int ie){
        if(is>ie){
            return NULL;
        }
        TreeNode*root=new TreeNode(preorder[preint]);
        preint++;
        int index;
        for(int i=is;i<=ie;i++){
            if(inorder[i]==root->val){
                index=i;
                break;
            }
        }
        root->left=helper(preorder,inorder,is,index-1);
        root->right=helper(preorder,inorder,index+1,ie);
        
        return root;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode*ans=helper(preorder,inorder,0,inorder.size()-1);
        return ans;
    }
};
