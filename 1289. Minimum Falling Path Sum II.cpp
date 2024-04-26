class Solution {
public:
    int n;
    int dp[201][201];
    int solve(int col,int row,vector<vector<int>>& grid){
        if(row==n-1){
            return grid[row][col];
        }
          if(dp[row][col]!=-1){
            return dp[row][col];
          }
            int ans=INT_MAX;
            for(int nextcol=0;nextcol<n;nextcol++){
                if(nextcol!=col){
                    ans=min(ans,solve(nextcol,row+1,grid));
                }
            }

            return dp[row][col]=grid[row][col]+ans;
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        n=grid.size();
        int ans=INT_MAX;
        for(int col=0;col<n;col++){
            ans=min(ans,solve(col,0,grid));
        }
        return ans;
    }
};
