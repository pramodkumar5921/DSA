#include<bits/stdc++.h>
using namespace std;
int bfs(vector<int>&vis,unordered_map<int,vector<int>>&mp,int node,int target){
    vis[node]=1;
    queue<int>q;
    q.push(node);
    int cnt=0;
    while(q.size()>0){
        int x=q.size();
        while(x--){
        int curr=q.front();
        q.pop();
        if(curr==target){
            return cnt;
        }
        for(auto child:mp[curr]){
            if(vis[child]==0){
                q.push(child);
                vis[child]=1;
            }
        }
        }
        cnt++;
    }
    return cnt;
}
void solve(){
    int n,m;
    cin>>n>>m;
    unordered_map<int,vector<int>>mp;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        mp[u].push_back(v);
        mp[v].push_back(u);
    }
    vector<int>vis(n+1,0);
    cout<<bfs(vis,mp,1,n)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
