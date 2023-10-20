#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int>graph[],vector<int>&vis){
    vis[node]=1;
    for(auto child:graph[node]){
        if(vis[child]==0){
            dfs(child,graph,vis);
            vis[child]=1;
        }
           
    }
    return;
}
void solve(){
     int v,e;
    cin>>v>>e;
    vector<int>graph[v];
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<int>vis(v,0);
    int start,end;
    cin>>start>>end;
    dfs(start,graph,vis);
    if(vis[end]==1){
        cout<<"true"<<endl;
        return ;
    }
    cout<<"false"<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
