class Solution {
public:
    int solve(int n,int target,int i,int dp[10001][101]){
        // base case
        if(i*i>target){
            if(target==0){
                return 0;
            }
            else{
                return 1e9;
            }
        }
        if(i*i==target){
            return 1;
        }
        if(dp[target][i]!=-1){
            return dp[target][i];
        }
        // recursive case
        int include=1+solve(n,target-i*i,i,dp);
        int exclude=0+solve(n,target,i+1,dp);
        int temp=min(include,exclude);
        return dp[target][i]=temp;
    }
    int numSquares(int n) {
        int dp[10001][101];
        memset(dp,-1,sizeof(dp));
        int ans=solve(n,n,1,dp);
        return ans;
    }
};
