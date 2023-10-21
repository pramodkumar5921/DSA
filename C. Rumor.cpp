#include<bits/stdc++.h>
using namespace std;
long long dfs(vector<long long>&vis,unordered_map<long long,vector<long long>>&mp,long long node,vector<long long >&arr){
    long long ans=arr[node-1];
    vis[node]=1;
    for(auto child:mp[node]){
        if(vis[child]==0){
            ans = min(ans,dfs(vis,mp,child,arr));
            vis[child]=1;
        }
    }
    return ans;
}
int main(){
    long long  n,r;
    cin>>n>>r;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<long long,vector<long long>>mp;
    for(int i=0;i<r;i++){
        long long u,v;
        cin>>u>>v;
        mp[u].push_back(v);
        mp[v].push_back(u);
    }
    vector<long long>vis(n+1,0);
    long long  res=0;
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            long long ans=dfs(vis,mp,i,arr);
            res+=ans;
        }
    }
    cout<<res<<endl;
    return 0;
}
