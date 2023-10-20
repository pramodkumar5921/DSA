/************************************************************

   Following is the TreeNode class structure

   class TreeNode {
    public:
        int data;
        vector<TreeNode*> children;

        TreeNode(int data) {
            this->data = data;
        }
   }

************************************************************/

int solve(int n,TreeNode*root){
    // base case
    if(root==nullptr){
        return 0;
    }
    // recursivecase
    int ans=0;
    for(auto child:root->children){
        int res = child->data+solve(n,child);
        ans=max(ans,res);
    }
    return ans;
}
int findMaxSum(int n, TreeNode* root){
    int ans=solve(n,root);
    ans=ans+root->data;
    return ans;
}
