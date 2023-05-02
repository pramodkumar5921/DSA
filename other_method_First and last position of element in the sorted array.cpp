#include<bits/stdc++.h>
vector<int> searchRange(vector<int> &arr, int x)
{
	// Write your code here.
	int n=arr.size();
	// int start=-1,end=-1;
	vector<int>ans;
	int start=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
	int end=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
	if(start>=n){
		ans.push_back(-1);
		ans.push_back(-1);
		return ans;
	}
	if(arr[start]==x){
		ans.push_back(start);
		ans.push_back(end-1);
		return ans;
	}
	else{
		ans.push_back(-1);
		ans.push_back(-1);
		return ans;
	}
	return ans;
}

