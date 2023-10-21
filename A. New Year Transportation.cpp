#include<bits/stdc++.h>
using namespace std;
void dfs(unordered_map<int,vector<int>>&adj,vector<int>&vis,int node){
    vis[node]=1;
    for(auto child:adj[node]){
        if(vis[child]==0){
            dfs(adj,vis,child);
            vis[child]=1;
        }
    }
    return ;
}
int main(){
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    vector<int>vis(n+1,0);
    unordered_map<int,vector<int>>adj;
    for(int i=0;i<n-1;i++){
        adj[i+1].push_back(arr[i]+i+1);
    }
    dfs(adj,vis,1);
    if(vis[target]==1){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
