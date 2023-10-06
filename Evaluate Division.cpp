#include<bits/stdc++.h>
using namespace std;
//  DFS  APPROCH
void dfs(map<string ,vector<pair<string ,double>>>&adj,string src,string des,set<string>&visited,double product,double &ans){
    if(visited.find(src)!=visited.end()){
        return;
    }
    visited.insert(src);
    if(src==des){
        ans=product;
        return;
    }
    for(auto it:adj[src]){
        string v=it.first;
        double val=it.second;
        dfs(adj,v,des,visited,product*val,ans);
    }
}
vector<double> evaluateEquations(vector<pair<string, string>> &equations, vector<pair<string, string>> &queries, vector<double> &values) {
   map<string ,vector<pair<string ,double>>>adj;
   int n=equations.size();
   for(int i=0;i<n;i++){
       string u=equations[i].first;
       string v=equations[i].second;
       double val=values[i];
       adj[u].push_back({v,val});
       adj[v].push_back({u,1.0/val});
   }
   vector<double>result;
   for(auto query:queries){
       string src=query.first;
       string des=query.second;
       double ans=-1.0;
       double product=1.0;
       set<string>visited;
       if (adj.find(src) != adj.end()) {
         dfs(adj, src, des, visited, product, ans);
       }
       result.push_back(ans);
   }
   return result;
}
