#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    unordered_map<int,vector<pair<int,int>>>graph;
    for(int i=0;i<m;i++){
        int u,v,weight;
        cin>>u>>v>>weight;
        graph[u].push_back({v,weight});
        graph[v].push_back({u,weight});
    }
    vector<int>vis(n+1,0);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,0});
    int ans=0;
    while(pq.size()>0){
        int node=pq.top().first;
        int weight=pq.top().second;
        pq.pop();
        if(vis[node]==true){
            continue;
        }
        ans=ans+weight;
        vis[node]=true;
        for(pair<int,int>child:graph[node]){
            int Nnode=child.second;
            int Nweight=child.first;
            pq.push({Nweight,Nnode});
        }
    }
    cout<<ans<<endl;
    return 0;
}
