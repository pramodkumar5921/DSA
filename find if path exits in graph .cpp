class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>adj[n];
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<int>q;
        q.push(source);
        vector<bool>visited(n,false);
        visited[source]=true;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(auto x:adj[u]){
                if(visited[x]==false){
                    visited[x]=true;
                    q.push(x);
                }
            }
        }
        return visited[destination];
    }
};
