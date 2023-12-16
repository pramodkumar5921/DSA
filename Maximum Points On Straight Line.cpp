#include<bits/stdc++.h>
using namespace std;
double slope(vector<int>&a,vector<int>&b){
	int x=b[0]-a[0];
	int y=b[1]-a[1];
	if(x==0){
		return static_cast<double>(INT_MAX);
	}
	return static_cast<double>(y)/x;
}
int maxPointsOnLine(vector<vector<int>> &points, int n) {
	int maxi=0;
	for(int i=0;i<points.size();i++){
		unordered_map<double,int>mp;
		for(int j=0;j<points.size();j++){
			if(i!=j){
			double sl=slope(points[i],points[j]);
			mp[sl]++;
			}
		}
		
	for(auto it:mp){
		maxi=max(it.second,maxi);
	}
	}
	
	return maxi+1;
}
