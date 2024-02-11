class Solution {
public:
    int m,n;
    int dp[71][71][71];
    int solve(vector<vector<int>>&grid,int row,int c1,int c2){
        // base case
        if(row>=m){
            return 0;
        }
        if(dp[row][c1][c2]!=-1){
            return dp[row][c1][c2];
        }
        int ans=0;
        int cherry=grid[row][c1];
        if(c1!=c2){
            cherry+=grid[row][c2];
        }
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                int new_c1=c1+i;
                int new_c2=c2+j;
                int new_r=row+1;
                if(new_c1>=0 and new_c1<n and new_r<m and new_c2>=0 and new_c2<n){
                   ans=max(ans,solve(grid,new_r,new_c1,new_c2));
                }
            }
        }
        return dp[row][c1][c2]=ans+cherry;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        m=grid.size();
        n=grid[0].size();
        int ans=solve(grid,0,0,n-1);
        return ans;
    }
};
