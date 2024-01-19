class Solution {
public:
    int n;
    int solve(int row,int col,vector<vector<int>>&dp){
        int temp=INT_MAX;
        if(row-1>=0 and col+1<n){
            temp=min(temp,dp[row-1][col+1]);
        }
        if(row-1>=0 and col-1 >=0){
            temp=min(temp,dp[row-1][col-1]);
        }
        if(row-1>=0){
            temp=min(temp,dp[row-1][col]);
        }
        return temp;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        n=matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int col=0;col<n;col++){
            dp[0][col]=matrix[0][col];
        }
        for(int row=1;row<n;row++){
            for(int col=0;col<n;col++){
                dp[row][col]=matrix[row][col]+solve(row,col,dp);
            }
        }
        int ans=INT_MAX;
        for(int col=0;col<n;col++){
            ans=min(dp[n-1][col],ans);
        }
        return ans;
    }
};
