#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>subsets;
void solve(vector<int> &subset,int i,vector<int> &nums){
	// basecase
	if(i==nums.size()){
		subsets.push_back(subset);
		return ;
	}
	// recursive case
    // exclude the ith element 
	solve(subset,i+1,nums);
    // include the ith element
	subset.push_back(nums[i]);
    solve(subset,i+1,nums);
	subset.pop_back();
}
int main() {
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
    vector<int>subset;
	solve(subset,0,nums);
    int sum=0;
	for(auto subset:subsets){
        for(auto ele:subset){
        
        }
        cout<<endl;
    }
    
	return 0;
}
