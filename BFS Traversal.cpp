#include<bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>>&graph,vector<int>&vis,int node,int n){
   vis[node]=1;
   queue<int>q;
   q.push(node);
   while(q.size()>0){
       int curr=q.front();
       q.pop();
       cout<<curr<<" ";
       for(int i=0;i<n;i++){
           if(vis[i]==0 and graph[curr][i]==1){
               q.push(i);
               vis[i]=1;
           }
       }
   }
   return;
}
int main(){
    int v,e;
    cin>>v>>e;
    vector<vector<int>>graph(v,vector<int>(v,0));
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;
    }
    vector<int>vis(v,0);
    for (int i = 0; i < v; i++) {
        if (vis[i] == 0) {
            bfs(graph, vis, i,v);
        }
    }
    return 0;
}
