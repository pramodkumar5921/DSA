class Solution {
public:
    int m,n;
    vector<int>dr={-1,0,1,0};
    vector<int>dc={0,1,0,-1};
    void dfs(vector<vector<int>>& land,vector<vector<int>>& vis,int row,int col,int &xmin,int &xmax,int &ymin,int &ymax){
        vis[row][col]=1;
        xmin=min(row,xmin);
        xmax=max(row,xmax);
        ymin=min(col,ymin);
        ymax=max(col,ymax);

        for(int i=0;i<4;i++){
            int nrow=row+dr[i];
            int ncol=col+dc[i];
            if(nrow>=0 and nrow<m and ncol>=0 and ncol<n and vis[nrow][ncol]==0 and land[nrow][ncol]==1){
                 dfs(land,vis,nrow,ncol,xmin,xmax,ymin,ymax);
            }
        }
        return;
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        m=land.size();
        n=land[0].size();
        vector<vector<int>> ans;
        vector<vector<int>>vis(m+1,vector<int>(n+1,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]==0 and land[i][j]==1){
                    int xmin=INT_MAX,xmax=INT_MIN,ymin=INT_MAX,ymax=INT_MIN;
                    dfs(land,vis,i,j,xmin,xmax,ymin,ymax);
                        ans.push_back({xmin,ymin,xmax,ymax});
                }
            }
        }
        return ans;
    }
};
