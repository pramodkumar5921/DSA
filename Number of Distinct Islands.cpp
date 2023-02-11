// User function Template for C++

class Solution {
  public:
    void dfs(int row, int col, vector < vector < int >> & grid,
      vector < vector < int >> & vis, vector < pair < int, int >> & vec, int row0, 
      int col0) {
        vis[row][col]=1;
        vec.push_back({row-row0,col-col0});
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<4;i++){
            int nrow=delrow[i]+row;
            int ncol=delcol[i]+col;
            if(nrow>=0 and nrow<m and ncol<n and ncol>=0 and grid[nrow][ncol]==1 and !vis[nrow][ncol]){
             dfs(nrow,ncol,grid,vis,vec,row0,col0);   
            }
        }
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        set<vector<pair<int,int>>>st;
    
        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                if(vis[row][col]==0 and grid[row][col]==1){
                    vector<pair<int,int>>vec;
                    dfs(row,col,grid,vis,vec,row,col);
                    st.insert(vec);
                }
            }
        }
        return st.size();
    }
};
