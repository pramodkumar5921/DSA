class Solution {
public:
    int dp[47];
    int solve(int n){
        if(n<=3){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=solve(n-1)+solve(n-2);
    }
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        int ans=solve(n);
        return ans;
    }
};
