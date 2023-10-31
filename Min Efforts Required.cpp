#include<bits/stdc++.h>
using namespace std;
const long long int inf=1e9;
long long int minEffortsRequired(vector<pair<pair<int, int>, long long int>>&edges, int n, int src, int dest){
	vector<long long int>dist(n,inf);
	dist[src]=1;
	unordered_map< int,vector<pair<int,long long int>>>mp;
	for(int i=0;i<edges.size();i++){
		pair<pair<int , int>, long long int>temp=edges[i];
		 int u=temp.first.first;
		 int v=temp.first.second;
		long long int wt=temp.second;
		mp[u].push_back({v,wt});
	}
	priority_queue<pair<long long int,long long int>,vector<pair<long long int,long long int>>,greater<pair<long long int,long long int>>>pq;
	pq.push({1,src});
	while(pq.size()>0){
		pair<long long int,long long int>temp=pq.top();
		long long int dis =temp.first;
		long long int node=temp.second;
		pq.pop();
		for( auto child :mp[node]){
			long long int weight =child.second;
			long long int other=child.first;
			if( dist[other]> weight*dis){
				dist[other]=weight*dis;
				pq.push({weight*dis,other});
			}
		}
	}
	if(dist[dest]==1e9){
		return -1;
	}
	return dist[dest];
}
