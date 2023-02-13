class Solution {
public:
    vector<int> findOrder(int v, vector<vector<int>>& pre) {
        vector<int>adj[v];
        for(int i=0;i<pre.size();i++){
            adj[pre[i][1]].push_back(pre[i][0]);
        }
        vector<int>ind(v,0);
        for(int i=0;i<v;i++){
            for(auto it:adj[i]){
                ind[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<v;i++){
            if(ind[i]==0){
                q.push(i);
            }
        }
        vector<int>ans;
        while(q.size()>0){
            int node=q.front();
            ans.push_back(node);
            q.pop();
            for(auto it:adj[node]){
                ind[it]--;
                if(ind[it]==0){
                    q.push(it);
                }
            }
        }
        if(ans.size()==v){
            return ans;
        }
        vector<int>temp;
        return temp;
    }
};
