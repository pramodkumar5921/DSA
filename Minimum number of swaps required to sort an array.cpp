#include<bits/stdc++.h>
int solve(int ele,unordered_map<int,int>&mp){
   return mp[ele];
}
int minSwaps(vector<int> &arr)
{
	unordered_map<int,int>mp;
	for(int i=0;i<arr.size();i++){
		mp[arr[i]]=i;
	}
	vector<int>temp=arr;
	sort(temp.begin(),temp.end());
	int cnt=0;
	for(int i=0;i<arr.size();i++){
		if(arr[i]!=temp[i]){
			int idx=solve(temp[i],mp);
			swap(arr[i],arr[idx]);
			mp[arr[i]]=i;
			mp[arr[idx]]=idx;                        
			cnt++;
		}
	}
	return cnt;
}
