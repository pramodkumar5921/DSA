#include<bits/stdc++.h>
using namespace std;
vector<int>dr={-1,0,1,0};
vector<int>dc={0,1,0,-1};
bool dfs(int row,int col,vector<vector<char>>&grid,vector<vector<int>>&vis,int pr,int pc){
    vis[row][col]=1;
    int n=grid.size();
    int m=grid[0].size();
    bool ans=false;
    for(int i=0;i<4;i++){
        int nr=row+dr[i];
        int nc=col+dc[i];
        if(nr<n and nr>=0 and nc>=0 and nc<m and grid[nr][nc]==grid[row][col]){
             if (vis[nr][nc] == 1 and nr == pr and nc == pc) {
                continue;
            }
            if(vis[nr][nc]==1){
                return true;
            }
           ans |= dfs(nr, nc, grid, vis, row, col);
        }
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>grid(n,vector<char>(m,'O'));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    vector<vector<int>>vis(n,vector<int>(m,0));
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]==0){
               bool res = dfs(i,j,grid,vis,-1,-1);
                if(res==true){
                   ans++;
               }
            }
        }
    }
    if(ans==0){
        cout<<0<<endl;
        return 0;
    }
    cout<<1<<endl;
    return 0;
}
