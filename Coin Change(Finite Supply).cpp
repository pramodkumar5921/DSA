#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int solve(int n, vector<int> &coins, vector<int> &freq, int v,int idx,vector<vector<int>>&dp){
    if(v==0){
        return 1;
    }
    if(v<0 or idx==n){
        return 0;
    }
    if(dp[idx][v]!=-1){
        return dp[idx][v]%mod;
    }
    int ways=0;

    ways = (ways%mod + solve(n,coins,freq,v,idx+1,dp)%mod)%mod;

    for(int i=1;i<=freq[idx];i++){
        if(v>=i*coins[idx]){
          ways =  (ways%mod +  solve(n,coins,freq,v-i*coins[idx],idx+1,dp)%mod)%mod;
        }
    }
    return dp[idx][v] = ways%mod;
}

int coinChange(int n, vector<int> &coins, vector<int> &freq, int v) {
    vector<vector<int>>dp(n+1,vector<int>(v+1,-1));
    // if()
  return solve(n,coins,freq,v,0,dp);
}
