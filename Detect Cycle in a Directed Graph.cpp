#include<bits/stdc++.h>
using namespace std;
bool dfs(int node,unordered_map<int,vector<int>>&mp,vector<int>&vis){
	vis[node]=1;
	// bool flag=false;
	for(auto child:mp[node]){
		if(vis[child]==1){
			return true;
		}
		if(vis[child]==0){
			bool flag=dfs(child,mp,vis);
			if(flag==true){
				return true;
			}
		}
		
	}
	vis[node]=2;
	return false;
}
bool isCyclic(vector<vector<int>>& edges, int v, int e){
	unordered_map<int,vector<int>>mp;
	for(int i=0;i<edges.size();i++){
		int u=edges[i][0];
		int v=edges[i][1];
		mp[u].push_back(v);
	}
	vector<int>vis(v,0);
	bool flag=false;
        for (int i = 0; i < v; i++) {
                if (vis[i] == 0) {
                        flag += dfs(i, mp, vis);
                }
        }
		return flag;
}
