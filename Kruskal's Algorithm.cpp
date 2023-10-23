#include<bits/stdc++.h>
using namespace std;
int findparent(int x,vector<int>&parent){
    if(x==parent[x]){
        return x;
    }
    return parent[x]=findparent(parent[x],parent);
}
void combine(int u,int v,vector<int>&parent,vector<int>&subtree){
    int ru=findparent(u,parent);
    int rv=findparent(v,parent);
    if(ru==rv){
        return;
    }
    if(subtree[ru]>subtree[rv]){
        parent[rv]=ru;
        subtree[ru]+=subtree[rv];
    }
    else{
        parent[ru]=rv;
        subtree[ru]+=subtree[rv];
    }
}
void solve(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>graph;
    vector<int>weight;
    for(int i=0;i<m;i++){
        int u,v1,w;
        cin>>u>>v1>>w;
        graph.push_back({u,v1});
        weight.push_back(w);
    }
    vector<pair<int,pair<int,int>>>v;
    for(int i=0;i<m;i++){
        int w=weight[i];
        int u=graph[i].first;
        int v1=graph[i].second;
        v.push_back({w,{u,v1}});
    }
    sort(v.begin(),v.end());
    vector<int>parent(n+1,0);
    vector<int>subtree(n+1,1);
    for(int i=0;i<n;i++){
        parent[i]=i;
    }
    int res=0;
   for(int i=0;i<v.size();i++){
       int u=v[i].second.first;
       int v1=v[i].second.second;
       if(findparent(u,parent)==findparent(v1,parent)){
           continue;
       }
       else{
           res+=v[i].first;
           combine(u,v1,parent,subtree);
       }
   }
   cout<<res<<endl;
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
