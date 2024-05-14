class Solution {
public:
    int n,m;
    int solve(int row,int col,vector<vector<int>>&grid,vector<vector<int>>&vis){
        if(row<0 || col<0 || row>n || col>m || vis[row][col]==1 || grid[row][col]==0){
            return 0;
        }
        vis[row][col]=1;
        int ans=INT_MIN;
        if(row-1>=0 and col<m){
            ans=max(ans,grid[row][col]+solve(row-1,col,grid,vis));
        }
        if(row>=0 and col+1<m){
            ans=max(ans,grid[row][col]+solve(row,col+1,grid,vis));
        }
        if(row+1<n and col<m){
            ans=max(ans,grid[row][col]+solve(row+1,col,grid,vis));
        }
        if(row>=0 and col-1>=0){
            ans=max(ans,grid[row][col]+solve(row,col-1,grid,vis));
        }
        vis[row][col]=0;
        return ans;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        vector<vector<int>>vis=grid;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vis[i][j]=0;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0){
                    ans=max(ans,solve(i,j,grid,vis));
                }
            }
        }
        return ans;
    }
};
