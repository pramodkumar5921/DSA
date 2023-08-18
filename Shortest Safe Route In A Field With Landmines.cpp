#include <bits/stdc++.h>
int n,m; 
vector<int>dx={-1,0,1,0};
vector<int>dy={0,1,0,-1};
int bfs(vector<vector<int>> &temp,vector<vector<int>> &vis,vector<vector<int>>&dist){
	queue<pair<pair<int,int>,int>>q;
	for(int i=0;i<n;i++){
		if(temp[i][0]==1){
			q.push({{i,0},0});
			vis[i][0]=1;
		}
	}
	while(q.size()>0){
		int row=q.front().first.first;
		int col=q.front().first.second;
		int step=q.front().second;
		q.pop();
		dist[row][col]=step;
		if(col==m-1){
			return dist[row][col];
		}
		for(int i=0;i<4;i++){
			int nrow=dx[i]+row;
			int ncol=dy[i]+col;
			if(ncol>=0 and ncol<m and nrow>=0 and nrow<n and vis[nrow][ncol]==0 and temp[nrow][ncol]==1){
				q.push({{nrow,ncol},step+1});
				vis[nrow][ncol]=1;
			}
		}
	}
	return -1;
}
int shortestPath(vector<vector<int>> &field)
{
	n=field.size();
	m=field[0].size();
	vector<vector<int>>temp=field;
	vector<vector<int>> vis(n,vector<int>(m,0));
    queue<pair<int,int>>q;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(field[i][j]==0){
				q.push({i,j});
			}
		}
	}
	while(!q.empty()){
		int row=q.front().first;
		int col=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nrow=row+dx[i];
			int ncol=col+dy[i];
			if(nrow<n and nrow>=0 and ncol<m and ncol>=0){
				temp[nrow][ncol]=0;
			}
		}
	}
	vector<vector<int>> dist(n,vector<int>(m,-1));
	int ans=bfs(temp,vis,dist);
	return ans;
}
