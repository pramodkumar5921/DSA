#include<bits/stdc++.h>
using namespace std;
int solve(int n, vector<int>&dp){
        if(n==1 || n==2){
                return 1;
        }
        if(dp[n]!=-1){
                return dp[n];
        }
        dp[n]=solve(n-1,dp)+solve(n-2,dp);
        return dp[n];
}
int main(){
 
     int n;
     cin>>n;
     vector<int>dp(n+1,-1);
     cout<<solve(n,dp)<<'\n';  
     return 0;
}
