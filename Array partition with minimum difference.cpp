#include<bits/stdc++.h>
using namespace std;
int minSubsetSumDifference(vector<int>& arr, int n){
	int totSum=0;
	for(int i=0;i<arr.size();i++){
		totSum+=arr[i];
	}
	int k=totSum;
	// bool dp[n+1][k+1]={0};
	vector<vector<bool>>dp(n,vector<bool>(k+1,0));
	for(int i=0;i<n;i++){
		dp[i][0]=true;
	}
	if(arr[0]<=k){
		dp[0][arr[0]]=true;
	}
	for(int ind=1;ind<n;ind++){
		for(int target=1;target<=k/2;target++){
			bool nottake = dp[ind-1][target];
			bool take=false;
			if(arr[ind]<=target){
				take=dp[ind-1][target-arr[ind]];
			}
			dp[ind][target] = nottake | take;
		}
	}
	int mini=1e9;
	for(int s1=0;s1<=k/2;s1++){
		if(dp[n-1][s1]==1){
			// cout<<s1<<" ";
			mini=min(mini,abs((k-s1)-s1));
		}
	}
	return mini;
}
