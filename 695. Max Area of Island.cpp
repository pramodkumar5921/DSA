class Solution {
public:
    int bfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>&grid){
        queue<pair<int,int>>q;
        q.push({row,col});
        vis[row][col]=1;
        int m=grid.size();
        int n=grid[0].size();
        int cnt=0;
        while(q.size()>0){
            int row=q.front().first;
            int col=q.front().second;
            cnt++;
            q.pop();
            for(int delrow=-1;delrow<=1;delrow++){
                for(int delcol=-1;delcol<=1;delcol++){
                   if(delrow==-1 and delcol==0 || delrow==0 and delcol==1 ||delrow==1 and delcol==0 ||delrow==0 and delcol==-1){
                      int  nrow=row+delrow;
                      int  ncol=col+delcol;
                      if(nrow>=0 and nrow<m and ncol>=0 and ncol<n and !vis[nrow][ncol] and grid[nrow][ncol]==1){
                          vis[nrow][ncol]=1;
                          q.push({nrow,ncol});
                      }
                   }
                }
            }
        }
        return cnt;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        int ans=0;
        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                if(!vis[row][col] and grid[row][col]==1){
                    int temp=bfs(row,col,vis,grid);
                    ans=max(ans,temp);
                }
            }
        }
        return ans;
    }
};
