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
    TreeNode* helper(vector<int>&nums,int is,int ie){
        // base case
        if(is>ie){
            return NULL;
        }
        // recursive case
        int mid=(is+ie)/2;
        TreeNode*root=new TreeNode(nums[mid]);
        root->left=helper(nums,is,mid-1);
        root->right=helper(nums,mid+1,ie);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       
        int ie = nums.size()-1;   
       TreeNode*ans=helper(nums,0,ie);
        return ans;
    }
};
