class Solution {
public:
    vector<vector<int>>result;
    int timer=0;
    void Bridge(int node,int parent,vector<int>&vis,unordered_map<int,vector<int>>&graph
    ,vector<int>&IN,vector<int>&LOW){
        IN[node]=LOW[node]=timer++;
        vis[node]=true;
        
        for(int v:graph[node]){
            if(v==parent){
                continue;
            }
            if(vis[v]==false){
                Bridge(v,node,vis,graph,IN,LOW);
                if(LOW[v]>IN[node]){
                    result.push_back({node,v});
                }
                LOW[node]=min(LOW[node],LOW[v]);
            }
            else{
                LOW[node]=min(LOW[node],IN[v]);
            }
        }
        return;
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        unordered_map<int,vector<int>>graph;
        for(int i=0;i<connections.size();i++){
            int u=connections[i][0];
            int v=connections[i][1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<int>vis(n+1,0);
        vector<int>IN(n+1,0);
        vector<int>LOW(n+1,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                Bridge(i,-1,vis,graph,IN,LOW);
            }
        }
        return result;
    }
};
