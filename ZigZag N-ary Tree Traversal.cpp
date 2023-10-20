/**************************************************
   
    class TreeNode
    {
    public:
        int val;
        vector < TreeNode* > child;
        
        TreeNode(int val)
        {
            this->val = val;
        }

        ~TreeNode()
        {
            for( int i=0 ; i<child.size();i++)
            {
                delete child[i];
            }
        }
    };
    
*****************************************************/

vector<int> zigzagLevelOrder(int n, TreeNode* root){
    vector<vector<int>>v;
    queue<TreeNode*>q;
    q.push(root);
    if(root==nullptr){
        return {};
    }
    while(q.size()>0){
        int x=q.size();
        vector<int>v1;
        while(x--){
            TreeNode*curr=q.front();
            q.pop();
            for(auto it:curr->child){
                if(it!=nullptr){
                    q.push(it);
                }
            }
            v1.push_back(curr->val);
        }
        v.push_back(v1);
    }
    vector<int>ans;
    for(int i=0;i<v.size();i++){
        if(i%2==1){
            for(int j=v[i].size()-1;j>=0;j--){
                ans.push_back(v[i][j]);
            }
        }
        else{
            for(int j=0;j<v[i].size();j++){
                ans.push_back(v[i][j]);
            }
        }
    }
    return ans;
}
