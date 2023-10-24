#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    unordered_map<int,vector<pair<int,int>>>graph;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    vector<int>distance(n,INT_MAX);
    distance[0]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    // priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>> > p1;
    pq.push({0,0});
    while(pq.size()>0){
        pair<int,int>temp=pq.top();
        int node=temp.second;
        int dis=temp.first;
        pq.pop();
        for(auto child:graph[node]){
            int weight=child.second;
            int other=child.first;
            if(distance[other]>weight+dis){
                distance[other]=weight+dis;
                pq.push({weight+dis,other});
            }
        }
    }
    for(int i=0;i<distance.size();i++){
        cout<<i<<" "<<distance[i]<<endl;
    }
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
