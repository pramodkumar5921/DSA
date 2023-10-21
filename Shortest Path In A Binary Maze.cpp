#include<bits/stdc++.h>
using namespace std;
vector<int>dr={-1,0,1,0};
vector<int>dc={0,-1,0,1};
int bfs(int row,int col,pair<int,int>&dest,vector<vector<int>> &matrix,vector<vector<int>>&vis){
   int m=matrix.size();
   int n=matrix[0].size();
    vis[row][col]=1;
    queue<pair<int,int>>q;
    q.push({row,col});
    int ans=-1,cnt=0;
    while(q.size()>0){
        int x=q.size();
        while(x--){
        int nr=q.front().first;
        int nc=q.front().second;
        q.pop();
        if(nr==dest.first and nc==dest.second){
            ans=cnt;
            return ans;
        }
        for(int i=0;i<4;i++){
            int nrow=dr[i]+nr;
            int ncol=dc[i]+nc;
            if(nrow>=0 and nrow<m and ncol>=0 and ncol<n and vis[nrow][ncol]==0 and matrix[nrow][ncol]==1){
              q.push({nrow, ncol});
              vis[nrow][ncol] = 1;
            }
        }
        }
        cnt++;
    }
    return ans;
}
int shortestPathBinaryMatrix(vector<vector<int>> &matrix, pair<int, int> src, pair<int, int> dest){
   int m=matrix.size();
   int n=matrix[0].size();
   vector<vector<int>>vis(m+1,vector<int>(n+1,0));
   int row=src.first;
   int col=src.second;
   if(matrix[row][col]==0){
       return -1;
   }
   int ans=bfs(row,col,dest,matrix,vis);
   return ans;
}
