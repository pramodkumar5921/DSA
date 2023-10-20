#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>graph[],vector<int>&vis,int node){
    vis[node]=1;
    for(auto child:graph[node]){
        if(vis[child]==0){
            dfs(graph,vis,child);
            vis[child]=1;
        }
    }
    return ;
}
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>graph[n];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<int>vis(n,0);
    int ans=0;
    for(int i=0;i<n;i++){
        if(vis[i]==0){
            dfs(graph,vis,i);
            ans++;
        }
    }
    cout<<ans<<endl;
    return ;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
