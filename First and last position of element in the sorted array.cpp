#include<bits/stdc++.h>
vector<int> searchRange(vector<int> &arr, int x)
{
	// Write your code here.
	int i=0;int j=arr.size()-1;
	int start=-1,end=-1;
	vector<int>ans;
		int n=arr.size();
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			start=i;
			break;
		}
	}
	for(int i=j;i>=0;i--){
		if(arr[i]==x){
			end=i;
			break;
		}
	}
		ans.push_back(start);
		ans.push_back(end);
	return ans;
}

