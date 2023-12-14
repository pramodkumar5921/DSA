#include <bits/stdc++.h> 
using namespace std;
void solve(unordered_map<int,vector<int>>&mp,vector<int>&ans,vector<int>&indegree){
    queue<int>q;
    for(int i=0;i<indegree.size();i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(q.size()>0){
        int temp=q.front();
        ans.push_back(temp);
        q.pop();
        for(auto child:mp[temp]){
             indegree[child]--;
             if(indegree[child]==0){
                 q.push(child);
             }
        }
    }
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
   unordered_map<int,vector<int>>mp;
   vector<int>indegree(v,0);
   for(int i=0;i<edges.size();i++){
       int u=edges[i][0];
       int v1=edges[i][1];
       mp[u].push_back(v1);
       indegree[v1]++;
   }
    vector<int>ans;
    solve(mp,ans,indegree);
    return ans;
}
