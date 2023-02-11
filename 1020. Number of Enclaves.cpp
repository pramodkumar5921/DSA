class Solution {
public:
    int bfs(vector<vector<int>>& grid,vector<vector<int>>& vis,int row,int col,int delrow[],int delcol[]){
        vis[row][col]=1;
        queue<pair<int,int>>q;
        int res=0;
        q.push({row,col});
        int m=grid.size();
        int n=grid[0].size();
        while(q.size()>0){
            int row=q.front().first;
            int col=q.front().second;
            res++;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow>=0 and nrow<m and ncol>=0 and ncol<n and vis[nrow][ncol]==0 and grid[nrow][ncol]==1){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
        }
        return res;
    }
    int numEnclaves(vector<vector<int>>& grid) {
       int m=grid.size();
       int n=grid[0].size();
       vector<vector<int>>vis(m,vector<int>(n,0));
       int cnt=0;
       int delrow[]={-1,0,1,0};
       int delcol[]={0,1,0,-1};
       for(int col=0;col<n;col++){
           if(grid[0][col]==1 and vis[0][col]==0){
              int temp=bfs(grid,vis,0,col,delrow,delcol);
              cnt+=temp;
           }
        }
        for(int col=0;col<n;col++){
           if(grid[m-1][col]==1 and vis[m-1][col]==0){
              int temp=bfs(grid,vis,m-1,col,delrow,delcol);
              cnt+=temp;
           }
        }
        for(int row=0;row<m;row++){
           if(grid[row][0]==1 and vis[row][0]==0){
              int temp=bfs(grid,vis,row,0,delrow,delcol);
              cnt+=temp;
           }
        }
        for(int row=0;row<m;row++){
           if(grid[row][n-1]==1 and vis[row][n-1]==0){
              int temp=bfs(grid,vis,row,n-1,delrow,delcol);
              cnt+=temp;
           }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    ans++;
                }
            }
        }
        return ans-cnt;
    }
};
