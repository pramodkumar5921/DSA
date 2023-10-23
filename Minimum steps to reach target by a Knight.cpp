#include<bits/stdc++.h>
using namespace std;
vector<int>dr={-1,-2,-2,-1,1,2,2,1};
vector<int>dc={-2,-1,1,2,2,1,-1,-2};
int bfs(vector<vector<int>>&vis,int row,int col,int tr,int tc){
    int n=vis.size();
    vis[row][col]=1;
    queue<pair<int,int>>q;
    q.push({row,col});
    int cnt=0;
    while(q.size()>0){
        int x=q.size();
        // q.pop();
        while(x--){
        int row=q.front().first;
        int col=q.front().second;
        q.pop();
        if(row==tr and col==tc){
            return cnt;
        }
        for(int i=0;i<8;i++){
            int nr=dr[i]+row;
            int nc=dc[i]+col;
            if(nr>=0 and nr<n and nc<n and nc>=0 and vis[nr][nc]==0){
                q.push({nr,nc});
                vis[nr][nc]=1;
            }
        }
        }
        cnt++;
    }
    return cnt;
}
int minSteps(pair<int, int> knightPosition, pair<int, int> targetPosition, int size) {
   vector<vector<int>>vis(size+1,vector<int>(size+1,0));
   int sr=knightPosition.first;
   int sc=knightPosition.second;

   int tr=targetPosition.first;
   int tc=targetPosition.second;

   return bfs(vis,sr,sc,tr,tc);
}
