#include<bits/stdc++.h>
using namespace std;
int solve(int n,int x,int y,vector<int>&dp){
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	int ans1=solve(n-1,x,y,dp)^1;
	int ans2=solve(n-x,x,y,dp)^1;
	int ans3=solve(n-y,x,y,dp)^1;

	return dp[n]=max({ans1,ans2,ans3});
}
string findWinner(int n, int x, int y){
	vector<int>dp(n+1,-1);
	dp[x]=1;
	dp[y]=1;
	dp[1]=1;
	int ans=solve(n,x,y,dp);
    if(dp[n]==1){
		return "Beerus";
	}
	return "Whis";
}
