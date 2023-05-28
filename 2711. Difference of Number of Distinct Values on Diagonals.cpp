class Solution {
public:
    int sl(int row,int col,vector<vector<int>>& grid,int m,int n){
        unordered_set<int>st;
        int cnt=1;
        bool ans=false;
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=0;j--){
                if(i==(row-cnt) and j==(col-cnt)){
                    ans=true;
                    st.insert(grid[i][j]);
                }
            }
            if(ans==true){
            cnt++;
            }
        }
        return st.size();
    }
    int sr(int row,int col,vector<vector<int>>& grid,int m,int n){
        unordered_set<int>st;
        int cnt=1;
        int ans=false;
        for(int i=row+1;i<m;i++){
            for(int j=col+1;j<n;j++){
                if(i==(cnt+row) and j==(cnt+col)){
                    ans = true;
                    st.insert(grid[i][j]);
                }
            }
            if(ans==true){
            cnt++;
            }
        }
        return st.size();
    }
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>ans(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int left=sl(i,j,grid,m,n);
                int right=sr(i,j,grid,m,n);
                ans[i][j]=abs(left-right);
            }
        }
        return ans;
    }
};
