class Solution {
public:
    void dfs(vector<int>&vis,int node,vector<vector<int>>&adj){
        vis[node]=1;
        for(auto it:adj[node]){
            if(vis[it]==0){
                dfs(vis,it,adj);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        // vector<vector<int>>adj(n);
        int m=connections.size();
        if(m<n-1){
            return -1;
        }
        vector<vector<int>>adj(n);
        for(auto i:connections){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
            vector<int>vis(n,0);
            int ans=0;
            for(int i=0;i<n;i++){
                if(vis[i]==0){
                    dfs(vis,i,adj);
                    ans++;
                }
            }
        
        return ans-1;
    }
};
