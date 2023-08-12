class Solution {
public:
    int n,m;
    int dp[101][101];
    int solve(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&vis){
        if(i<0 || i>=n || j<0 || j>=m || vis[i][j]==1 || grid[i][j]==1){
             return 0;
        }
        if(i==n-1 and j==m-1){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        vis[i][j]=true;
        int op1=solve(i,j+1,grid,vis);
        int op2=solve(i+1,j,grid,vis);
        vis[i][j]=false;
        return dp[i][j]=op1+op2;
    }
    int uniquePathsWithObstacles(vector<vector<int>>&grid) {
        vector<string>result;
        string temp;
        n=grid.size();
        m=grid[0].size();
        if(grid[n-1][m-1]==1 || grid[0][0]==1){
            return 0;
        }
        vector<vector<int>>vis(n,vector<int>(m,0));
        memset(dp,-1,sizeof(dp));
        int ans=solve(0,0,grid,vis);
        return ans;
    }
};
