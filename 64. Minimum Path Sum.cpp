class Solution {
public:
    int solve(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp){
        if(i<0 || j<0 || i>=grid.size()||j>=grid[0].size()){
            return 1000000000;
        }
        if(i==grid.size()-1 and j==grid[0].size()-1){
            return dp[i][j]=grid[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int a=grid[i][j]+solve(i+1,j,grid,dp);
        int b=grid[i][j]+solve(i,j+1,grid,dp);
        return dp[i][j]= min(a,b);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return solve(0,0,grid,dp);
    }
};
