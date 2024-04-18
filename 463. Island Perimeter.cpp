class Solution {
public:
    void dfs(vector<vector<int>>&grid,int m,int n,int row,int col,int &ans){
        if(row<0 || col<0 || row>=m || col>=n || grid[row][col]==0){
            ans++;
            return;
        }

        if(grid[row][col]==-1){
            return;
        }
          grid[row][col]=-1;
        dfs(grid,m,n,row-1,col,ans);
        dfs(grid,m,n,row,col+1,ans);
        dfs(grid,m,n,row+1,col,ans);
        dfs(grid,m,n,row,col-1,ans);
        return;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        // vector<vector<int>>& vis(m+1,vector<int>(n+1,0));
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    dfs(grid,m,n,i,j,ans);
                    return ans;
                }
            }
        }
        return ans;
    }
};
