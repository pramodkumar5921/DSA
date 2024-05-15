class Solution {
public:
    vector<int>dr={-1,0,1,0};
    vector<int>dc={0,1,0,-1};
    bool check(int mid,vector<vector<int>>&dist){
        int m=dist.size();
        vector<vector<int>>vis(m,vector<int>(m,0));
        queue<pair<int,int>>que;
        que.push({0,0});
        vis[0][0]=1;
        if(dist[0][0]<mid){
            return false;
        }
        while(que.size()>0){
            int row=que.front().first;
            int col=que.front().second;
            que.pop();
            if(row==m-1 and col==m-1){
                return true;
            }
            for(int i=0;i<4;i++){
                int nrow=dr[i]+row;
                int ncol=dc[i]+col;
                if(nrow>=0 and nrow<m and ncol>=0 and ncol<m and vis[nrow][ncol]==0){
                    if(dist[nrow][ncol]<mid){
                        continue;
                    }
                    que.push({nrow,ncol});
                    vis[nrow][ncol]=1;
                }
            }
        }
        return false;
    }
    int maximumSafenessFactor(vector<vector<int>>& grid) {
          int n=grid.size();
        if(grid[0][0]==1){
            return 0;
        }
        if(grid[n-1][n-1]==1){
            return 0;
        }
        vector<vector<int>>dist(n,vector<int>(n,-1));
        vector<vector<int>>vis(n,vector<int>(n,0));
        queue<pair<int,int>>que;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    que.push({i,j});
                    vis[i][j]=1;
                    // dist[i][j]=0;
                }
            }
        }
        int level=0;
        while(que.size()>0){
            int siz=que.size();
            while(siz--){
                int curr_row=que.front().first;
                int curr_col=que.front().second;
                que.pop();
                dist[curr_row][curr_col]=level;
                for(int i=0;i<4;i++){
                    int nrow=dr[i]+curr_row;
                    int ncol=dc[i]+curr_col;
                    if(nrow>=0 and ncol>=0 and ncol<n and nrow<n and vis[nrow][ncol]==0){
                        que.push({nrow,ncol});
                        vis[nrow][ncol]=1;
                    }
                }
            }
            level++;
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<dist[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        int l=0,r=400;
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(check(mid,dist)==true){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
};
