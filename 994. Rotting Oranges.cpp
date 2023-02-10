class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                if(grid[row][col]==2){
                    q.push({row,col});
                    vis[row][col]=1;
                }
            }
        }
        q.push({-1,-1});
        int cnt=0;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        while(q.size()>0){
            pair<int,int>temp=q.front();
            q.pop();
            int row=temp.first;
            int col=temp.second;
            if(row==-1 and col==-1){
                if(q.size()==0){
                  for(int row=0;row<m;row++){
                      for(int col=0;col<n;col++){
                          if(grid[row][col]==1 and vis[row][col]==0){
                              return -1;
                          }
                      }
                  }
                    return cnt;
                }
                cnt++;
                q.push({-1,-1});
            }
            else{
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow>=0 and nrow<m and ncol>=0 and ncol<n and vis[nrow][ncol]==0 
                and grid[nrow][ncol]==1){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
        }
        }
        return cnt;
    }
};
