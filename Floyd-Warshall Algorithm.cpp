#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>dist(n+1,vector<int>(n+1,0));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==j){
                dist[i][j]=0;
            }
            else{
                dist[i][j]=inf;
            }
        }
    }
    for(int i=0;i<m;i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        dist[x][y]=min(wt,dist[x][y]);
        dist[y][x]=min(wt,dist[y][x]);
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        int u,v;
        cin>>u>>v;
        cout<<dist[u][v]<<endl;
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
