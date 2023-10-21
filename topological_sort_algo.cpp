#include<bits/stdc++.h>
using namespace std;
void bfs(unordered_map<int,vector<int>>&adj,vector<int>&indegree,int node,vector<int>&ans){
    queue<int>que;
    for(int i=0;i<indegree.size();i++){
        if(indegree[i]==0){
            que.push(i);
        }
    }
    while(que.size()>0){
        int curr=que.front();
        ans.push_back(curr);
        que.pop();
        for(auto child:adj[curr]){
            indegree[child]--;
            if(indegree[child]==0){
                que.push(child);
            }
        }
    }
    return;
}
vector<int> topologicalSort(vector<vector<int>> &graph, int edges, int nodes) {
   unordered_map<int,vector<int>>adj;
   int n=graph.size();
   vector<int>indegree(nodes,0);
   for(int i=0;i<n;i++){
       int u=graph[i][0];
       int v=graph[i][1];
       adj[u].push_back(v);
       indegree[v]=indegree[v]+1;
   }
   vector<int>ans;
   bfs(adj,indegree,0,ans);
    return ans;
}
