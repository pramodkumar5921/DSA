#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int idx1=0,idx2=0;
	int k=0;
	vector<int>ans(m+n);
	while(idx1<m and idx2<n){
		if(arr1[idx1]<=arr2[idx2]){
			ans[k++]=arr1[idx1++];
		}
		else{
			ans[k++]=arr2[idx2++];
		}
	}
	while(idx1<m){
		ans[k++]=arr1[idx1++];
	}
	while(idx2<n){
		ans[k++]=arr2[idx2++];
	}
	return ans;
}
