#include<bits/stdc++.h>
using namespace std;
int solve(int**input,int i,int j,int n ,int m,vector<vector<int>>&dp ){
    // base case
    
    if(i==m-1 and j==n-1){
        return input[i][j];
    }
    if(i>=m or j>=n ){
        return INT_MAX;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    // recursive case
    int ans1 = solve(input,i+1,j,n,m,dp);
    int ans2 = solve(input,i,j+1,n,m,dp);
    int ans3 = solve(input,i+1,j+1,n,m,dp);

    int ans4 = min(ans1,ans2);
    return dp[i][j]=min(ans4,ans3)+input[i][j];
}
int minCostPath(int **input, int n, int m) {
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    int res=solve(input,0,0,n,m,dp);
    return res;
}
