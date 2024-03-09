#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int solve(string &str1,string &str2,int i,int j){
	if(i==str1.size()){
		return 0;
	}
	if(j==str2.size()){
		return 0;
	}
	if(dp[i][j]!=-1){
		return dp[i][j];
	}
	if(str1[i]==str2[j]){
		return dp[i][j]=1+solve(str1,str2,i+1,j+1);
	}
	return dp[i][j]=max(solve(str1,str2,i,j+1),solve(str1,str2,i+1,j));
	
}
int smallestSuperSequence(string str1, string str2){
	memset(dp,-1,sizeof(dp));
	int ans=solve(str1,str2,0,0);
	return str1.size()+str2.size()-ans;
}
