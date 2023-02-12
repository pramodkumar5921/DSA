class Solution {
public:
    bool dfs(int start,int col,vector<vector<int>>& graph,vector<int>&color,int v){
        color[start]=col;
        for(auto it:graph[start]){
            if(color[it]==-1){
                color[it]=!color[start];
                if(dfs(it,!col,graph,color,v)==false){
                    return false;
                }
            }
            else if(color[it]==color[start]){
                return false;
            }
        }
        
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int>color(v,-1);
        for(int i=0;i<v;i++){
            if(color[i]==-1){
               if(dfs(i,0,graph,color,v)==false){
                   return false;
               }
            }
        }
        return true;
    }
};
