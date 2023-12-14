class Solution {
public:
    unordered_map<int,vector<int>>mp;
    void solve(vector<vector<int>>&ans,vector<int>temp,int src,int target,vector<int>&vis){
        vis[src]=1;
        temp.push_back(src);
        if(src==target){
            ans.push_back(temp);
        }
        for(auto child:mp[src]){
            if(vis[child]==0){
                // temp.push_back(child);
                solve(ans,temp,child,target,vis);
            }
        }
        vis[src]=0;
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        for(int i=0;i<graph.size();i++){
           for(int j=0;j<graph[i].size();j++){
               mp[i].push_back(graph[i][j]);
           }
        }
        vector<vector<int>>ans;
        vector<int>temp;
        int n=graph.size();
        vector<int>vis(n,0);
        solve(ans,temp,0,n-1,vis);
        return ans;
    }
};
