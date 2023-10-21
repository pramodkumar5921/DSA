#include<bits/stdc++.h>
using namespace std;
int solve(unordered_map<int,int>&mp,int ele){
	return mp[ele];
}
int minSwaps(vector<int> &arr){
	vector<int>ans=arr;
	sort(ans.begin(),ans.end());
	int cnt=0;
	unordered_map<int,int>mp;
	for(int i=0;i<arr.size();i++){
		mp[arr[i]]=i;
	}
	for(int i=0;i<arr.size();i++){
          if (arr[i] != ans[i]) {
            int idx = solve(mp,ans[i]);
			cnt++;
			swap(arr[i],arr[idx]);
			mp[arr[i]]=i;
			mp[arr[idx]]=idx;
          }
        }
		return cnt;
}
