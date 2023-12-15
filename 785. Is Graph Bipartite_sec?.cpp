class Solution {
public:
    unordered_map<int,vector<int>>mp;
    bool dfs(int src,vector<int>&color,bool change){
        color[src]=change;
        for(auto child:mp[src]){
            if(color[child]==-1){
                if(dfs(child,color,!change)==false){
                    return false;
                }
            }
            else if(color[child]==change){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);
        for(int i=0;i<graph.size();i++){
            for(int j=0;j<graph[i].size();j++){
                mp[i].push_back(graph[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            if(color[i]==-1){
                if(dfs(i,color,0)==false){
                    return false;
                }
            }
        }
        return true;
    }
};
