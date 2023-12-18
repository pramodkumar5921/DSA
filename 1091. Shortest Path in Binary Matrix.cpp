class Solution {
public:
    int n;
    vector<int>drow={-1,-1,-1,0,1,1,1,0};
    vector<int>dcol={-1,0,1,1,1,0,-1,-1};
    int bfs(int row,int col,vector<vector<int>>& grid){
        queue<pair<int,pair<int,int>>>q;
        vector<vector<int>>dist(n+1,vector<int>(n+1,1e9));
        dist[row][col]=0;
        q.push({1,{0,0}});
        while(q.size()>0){
        int row=q.front().second.first;
        int col=q.front().second.second;
        int dis=q.front().first;
            q.pop();
              for(int i=0;i<8;i++){
                int dr=row+drow[i];
                int dc=col+dcol[i];
                if(dr>=0 and dr<n and dc>=0 and dc<n and grid[dr][dc]==0 and dis + 1 < dist[dr][dc]){
                    dist[dr][dc]=dis+1;
                    if(dr==n-1 and dc==n-1){
                        return dis+1;
                    }
                    q.push({dis+1,{dr,dc}});
                }
            }
        }
        return -1;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        n=grid.size();
        if(grid[0][0]==1 or grid[n-1][n-1]==1){
            return -1;
        }
        if(n==1){
            return 1;
        }
         return bfs(0,0,grid);
    }
};
