#include<bits/stdc++.h>
using namespace std;
int dp[1000001][2][3];
int solve(vector<int>&prices,int idx,bool buy ,int k){
    if(idx==prices.size()){
        return 0;
    }
     if(k<=0){
        return 0;
    }
    if(dp[idx][buy][k]!=-1){
        return dp[idx][buy][k];
    }
    int profit=0;
    if(buy==true){
        int include=-prices[idx]+solve(prices,idx+1,!buy,k);
        int exclude=0+solve(prices,idx+1,buy,k);

        profit += max(include,exclude);
    }
    else{
        int include=prices[idx]+solve(prices,idx+1,!buy,k-1);
        int exclude=0+solve(prices,idx+1,buy,k);

        profit+= max(include,exclude);
    }

    return dp[idx][buy][k]=profit;
}
int maxProfit(vector<int>& prices){
    memset(dp,-1,sizeof(dp));
    int ans=solve(prices,0,1,2);
    return ans;
}
