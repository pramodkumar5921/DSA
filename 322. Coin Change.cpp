class Solution {
public:
int dp[1000001];
int solve(vector<int>&coins,int amount){
    // base  case
    if(amount==0){
        return 0;
    }
    if(dp[amount]!=-1){
        return dp[amount];
    }
    // recursive case
    int ans=INT_MAX;
    for(auto coin:coins){
        if(amount-coin>=0){
        ans=min(ans+0LL,solve(coins ,amount-coin)+1LL);
        }
    }
    return dp[amount]= ans;

}
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        // int i=0;
        int ans=solve(coins,amount);
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};
