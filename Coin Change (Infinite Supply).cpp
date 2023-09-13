#include<bits/stdc++.h>
using namespace std;
int solve(int deno[],int value,int idx,int ans,int n,vector<vector<int>>&dp){
   // base case
   if(ans>value){
       return 0;
   }
   if(idx==n){
     if(ans==value){
         return 1;
     }
     return 0;
   }
   if(dp[idx][ans]!=-1){
       return dp[idx][ans];
   }
   // recursive case
   int include = solve(deno,value,idx,ans+deno[idx],n,dp);
   int exclude = solve(deno,value,idx+1,ans,n,dp);
   return dp[idx][ans]=include+exclude;
}
int countWaysToMakeChange(int deno[], int n, int value){
    vector<vector<int>>dp(n+1,vector<int>(value+1,-1));
    return solve(deno,value,0,0,n,dp);
}
