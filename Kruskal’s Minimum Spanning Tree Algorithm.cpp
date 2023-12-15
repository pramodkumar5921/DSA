#include<bits/stdc++.h>
using namespace std;
int findparent(int x,vector<int>&parent){
	if(x==parent[x]){
		return x;
	}
	return parent[x]=findparent(parent[x],parent);
}
void combine(int u,int v,vector<int>&parent,vector<int>&subtree){
	int ru=findparent(u,parent);
	int rv=findparent(v,parent);
	if(ru==rv){
		return ;
	}
	if(subtree[ru]>subtree[rv]){
		parent[rv]=ru;
		subtree[ru]+=subtree[rv];
	}
	else{
		parent[ru]=rv;
		subtree[rv]+=subtree[ru];
	}
}
bool cmp(vector<int>&a,vector<int>&b){
	if(a[2]<b[2]){
		return true;
	}
	return false;
}
int kruskalMST(int n, vector<vector<int>> &edges){
	vector<int>parent(n+1,0);
	for(int i=1;i<=n;i++){
		parent[i]=i;
	}
	vector<int>subtree(n+1,1);
	sort(edges.begin(),edges.end(),cmp);
	int ans=0;
	for(int i=0;i<edges.size();i++){
		int u=edges[i][0];
		int v=edges[i][1];
		int w=edges[i][2];
		if(findparent(u,parent)==findparent(v,parent)){
			continue;
		}
		else{
			ans+=w;
			combine(u,v,parent,subtree);
		}
	}
	return ans;
}
