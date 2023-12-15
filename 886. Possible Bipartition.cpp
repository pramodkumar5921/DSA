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
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
       vector<int>color(n+1,-1);
        for(int i=0;i<dislikes.size();i++){
            int u=dislikes[i][0];
            int v=dislikes[i][1];
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        for(int i=1;i<=n;i++){
            if(color[i]==-1){
               if(dfs(i,color,0)==false){
                return false;
                }
            }
        }
        return true;
    }
};
