#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
const int M=2e5+5;
vector<int>vis(N,0);
unordered_map<int,vector<int>>graph;
void dfs(int node){
    vis[node]=true;
    for(auto child:graph[node]){
        if(vis[child]==0){
        dfs(child);
            }
    }
    return;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int cnt=0;
    vector<int>temp;
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            temp.push_back(i);
            dfs(i);
            cnt++;
        }
    }
    if(cnt==1){
        cout<<0<<endl;
        return 0;
    }
    cout<<cnt-1<<endl;
    for(int i=0;i<temp.size()-1;i++){
        cout<<temp[i]<<" "<<temp[i+1]<<" ";
        cout<<endl;
    }
    return 0;
}
