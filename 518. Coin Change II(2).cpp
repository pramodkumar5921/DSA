class Solution {
public:
    // int dp[5001][301];
    // vector<vector<int>>dp(5000,vector<int>(301,-1));
    int solve(int amount,vector<int>&coins,int idx,int cnt,vector<vector<int>>&dp){
        int n=coins.size();
        // if(cnt>amount){
        //     return 0;
        // }
        if(amount==0){
            return 1;
        }
        if(idx==n){
            return 0;
        }
        if(amount<coins[idx]){
            return dp[amount][idx]=solve(amount,coins,idx+1,cnt,dp);
        }
        if(dp[amount][idx]!=-1){
            return dp[amount][idx];
        }
        int ans=coins[idx];
        int op1=solve(amount-ans,coins,idx,cnt,dp);
        int op2=solve(amount,coins,idx+1,cnt,dp);
        int temp=(op1+op2);
        return dp[amount][idx]=temp;
    }
    int change(int amount, vector<int>& coins) {
        sort(coins.begin(),coins.end());
        vector<vector<int>>dp(5001,vector<int>(301,-1));
        int ans=solve(amount,coins,0,0,dp);
        return ans;
    }
};
