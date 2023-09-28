#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>values,vector<int>&weights,int n,int w,int idx,vector<vector<int>>&dp){
    // base case
    if(n==0 || w==0){
        return 0;
    }
    if(idx==n){
        return 0;
    }
    if(dp[idx][w]!=-1){
        return dp[idx][w];
    }
    // recursive case
    int include=0;
    if(weights[idx]<=w){
        include = values[idx]  + solve(values,weights,n,w-weights[idx],idx+1,dp);
    }
    int exclude = solve(values,weights,n,w,idx+1,dp);

    return dp[idx][w]=max(include,exclude);
}
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w){
    vector<vector<int>>dp(n+1,vector<int>(w+1,-1));
	return solve(values,weights,n,w,0,dp);
}
