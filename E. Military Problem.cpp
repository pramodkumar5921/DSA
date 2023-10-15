#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
vector<int>graph[N];
vector<int>vis(N,0);
vector<int>size_v(N,1);
vector<int>fir(N,-1);
void dfs(int node,vector<int>&ans){
    vis[node] = 1;
    ans.push_back(node);
    fir[node]=ans.size()-1;
    for(int child:graph[node]){
        if(vis[child]==1){
            continue;
        }
        dfs(child,ans);
        size_v[node]+=size_v[child];
    }
    return;
}
int main(){
    int n,q;
    cin>>n>>q;
    // memset(vis,0,sizeof(vis));
    vector<int>arr(n);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    vector<pair<int,int>>pq(n);
    int cnt=2;
    for(int i=0;i<n-1;i++){
        pq[i]=(make_pair(arr[i],cnt));
        cnt++;
    }
    for(int i=0;i<n-1;i++){
        int u=pq[i].first;
        int v=pq[i].second;
        // return 0;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<int>ans;
    dfs(1,ans);
    while(q--){
        int u,v;
        cin>>u>>v;
        int i;
        i=fir[u];
        int total=i+v-1;
        if(total>size_v[u]+i-1){
            cout<<-1<<endl;
        }
        else{
        cout<<ans[total]<<endl;
        }
    }
    return 0;
}
