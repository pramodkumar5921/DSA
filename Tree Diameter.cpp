#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int>graph[],int depth[],int par=-1){
    for(auto child:graph[node]){
        if(child==par){
            continue;
        }
        depth[child]=depth[node]+1;
        dfs(child,graph,depth,node);
    }
    return;
}
void solve(){
    int n;
    cin>>n;
    vector<int>graph[n+1];
    int depth[n+1];
    for(int i=0;i<n-1;++i){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1,graph,depth);
    int maxnode=-1;
    int val=-1;
    for(int i=1;i<=n;++i){
        if(depth[i]>val){
            val=depth[i];
            maxnode=i;
        }
    }
    for(int i=1;i<=n;++i){
        depth[i]=0;
    }
    val=-1;
    dfs(maxnode,graph,depth);
     for(int i=1;i<=n;++i){
        if(depth[i]>val){
            val=depth[i];
        }
    }
    cout<<val<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
