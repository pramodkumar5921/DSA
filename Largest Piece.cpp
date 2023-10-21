#include<bits/stdc++.h>
using namespace std;
int bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>& grid,int delrow[],int delcol[],int m,int n){
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});
        int cnt=0;
        while(q.size()>0){
            int nr=q.front().first;
            int nc=q.front().second;
            cnt++;
            q.pop();
            for(int i=0;i<4;i++){
            int nrow=delrow[i]+nr;
            int ncol=delcol[i]+nc;
            if(nrow<m and nrow>=0 and ncol>=0 and ncol<n and vis[nrow][ncol]==0 and grid[nrow][ncol]=='1'){
                q.push({nrow,ncol});
                vis[nrow][ncol]=1;
            }
        }
        }
        return cnt;
    }
void solve(){
     int n;
    cin>>n;
    vector<vector<char>>grid(n+1,vector<char>(n+1,'0'));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    vector<vector<int>>vis(n+1,vector<int>(n+1,0));
     int ans=0;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                // int cnt=0;
                if(grid[row][col]=='1' and vis[row][col]==0){
                    int cnt = bfs(row,col,vis,grid,delrow,delcol,n,n);
                    ans = max(ans,cnt);
                }
            }
        }
        cout<<ans<<endl;
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
