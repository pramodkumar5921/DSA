class Solution {
public:
    int ndfs(int row,int col,vector<vector<int>>&nvis,vector<vector<int>>&grid,int &cnt,int m,int n){
        nvis[row][col]=1;
        cnt++;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow<m and nrow>=0 and ncol<n and ncol>=0 and nvis[nrow][ncol]==0 and grid[nrow][ncol]==1){
                
                ndfs(nrow,ncol,nvis,grid,cnt,m,n);
            }
        }
        return cnt;
    }
    int dfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>&grid,int &cnt,int m,int n){
        vis[row][col]=1;
        cnt++;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow<m and nrow>=0 and ncol<n and ncol>=0 and vis[nrow][ncol]==0 and grid[nrow][ncol]==1){
                
                dfs(nrow,ncol,vis,grid,cnt,m,n);
            }
        }
        return cnt;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        vector<vector<int>>nvis(m,vector<int>(n,0));
        int ans=0;
        int ans1=0;
        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                if(vis[row][col]==0 and grid[row][col]==1){
                    int cnt=0;
                    int temp=dfs(row,col,vis,grid,cnt,m,n);
                    ans+=temp;
                }
            }
        }
        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                if(row==0 or row==m-1 or col==n-1 or col==0){
                if(nvis[row][col]==0 and grid[row][col]==1){
                    int cnt=0;
                    int temp=ndfs(row,col,nvis,grid,cnt,m,n);
                    ans1+=temp;
                }
                }
            }
        }
        return ans-ans1;
    }
};
