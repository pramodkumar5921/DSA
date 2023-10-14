#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int>&v, vector<int>graph[], int par){
    for(auto child:graph[node]){
        if(child == par){
            continue;
        }
        dfs(child,v,graph,node);
        v[node] = (v[node]^v[child]);
    }
    return;
}
vector<int> XORquery(int n, vector<vector<int>> &edges, int q, vector<int> &query) {
 vector<int>v(n,-1);
 for(int i=0;i<n;++i){
     v[i]=i;
 }
//  return { };
 vector<int>graph[n];
 for(int i=0;i<n-1;i++){
     int u=edges[i][0];
     int v=edges[i][1];
     graph[u].push_back(v);
     graph[v].push_back(u);
 }
 dfs(0,v,graph,-1);
 vector<int>ans;
 for(int i=0;i<query.size();++i){
     ans.push_back(v[query[i]]);
 }
 return ans;
}
