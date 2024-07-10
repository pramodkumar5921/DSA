class Solution {
public:
    int dp[13][10001];
    int solve(vector<int>&coins,int amount,int idx){
        if(amount<0){
            return 1e9;
        }
        if(idx==coins.size()){
            if(amount==0){
                return 0;
            }
            return 1e9;
        }
        if(dp[idx][amount]!=-1){
            return dp[idx][amount];
        }
        int include=0,exclude=0;
        include = 1+solve(coins,amount-coins[idx],idx);
        exclude = solve(coins,amount,idx+1);
        return dp[idx][amount]=min(include,exclude);
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int ans=solve(coins,amount,0);
        if(ans==1e9){
            return -1;
        }
        return ans;
    }
};
