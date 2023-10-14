#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<vector<int>>&adj,vector<int>&ans,int par=-1){
	for(auto child:adj[node]){
		if(child==par){
			continue;
		}
		dfs(child,adj,ans,node);
		ans[node] = ans[node]+ans[child];
	}
	return ;
}
vector<int> countNodesInAllSubtrees(int n, vector<vector<int>> &adj) {
	vector<int>ans(n,1);
	dfs(0,adj,ans);
	return ans;
}
