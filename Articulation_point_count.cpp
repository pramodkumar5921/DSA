#include<bits/stdc++.h>
using namespace std;
# define int long long 
 void Articulation(int node,vector<int>&vis,vector<int>&IN,vector<int>&LOW,unordered_map<int,vector<int>>&graph,vector<int>&Point,int par=-1,int timer=0){
        vis[node]=true;
        IN[node]=LOW[node]=timer++;
        int child=0;
        
        for(auto v:graph[node]){
            if(v==par){
                continue;
            }
            if(vis[v]){
                LOW[node]=min(LOW[node],IN[v]);
            }
            else{
                Articulation(v,vis,IN,LOW,graph,Point,node,timer);
                child++;
                if(par!=-1 and LOW[v]>=IN[node]){
                    Point[node]=true;
                }
                LOW[node]=min(LOW[node],LOW[v]);
            }
        }
        if(par==-1 and child>1){
            Point[node]=true;
        }
        return;
    }
signed main(){
    int n,m;
    while(true){
        cin>>n>>m;
        if(n==0 and m==0){
            break;
        }
        vector<int>vis(n+1,0);
        vector<int>LOW(n+1,0);
        vector<int>IN(n+1,0);
        // int cnt=0;
        vector<int>Point(n+1,0);
        unordered_map<int,vector<int>>graph;
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        int timer=0;
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(vis[i]==0){
                Articulation(i,vis,IN,LOW,graph,Point);
            }
        }
        for(int i=1;i<=n;i++){
         if(Point[i]==true){
             cnt++;
         }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
