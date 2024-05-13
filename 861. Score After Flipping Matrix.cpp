class Solution {
public:
    int n,m;
    int caluate(vector<vector<int>>&grid){
        int ans=0;
        for(int i=0;i<n;i++){
            int temp=0;
            int cnt=1;
            for(int j=m-1;j>=0;j--){
                temp=temp+cnt*grid[i][j];
                cnt=cnt*2;
            }
            ans=ans+temp;
        }
        return ans;
    }
    void flip(vector<vector<int>>&grid,int row){
        for(int i=0;i<m;i++){
            if(grid[row][i]==0){
                grid[row][i]=1;
            }
            else{
                grid[row][i]=0;
            }
        }
    }
    void flipcol(int col,vector<vector<int>>&grid){
        for(int i=0;i<n;i++){
            if(grid[i][col]==1){
                grid[i][col]=0;
            }
            else{
                grid[i][col]=1;
            }
        }
    }
    int matrixScore(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        for(int i=0;i<n;i++){
            if(grid[i][0]!=1){
                flip(grid,i);
            }
        }
        for(int i=0;i<m;i++){
            int one=0,zero=0;
            for(int j=0;j<n;j++){
                if(grid[j][i]==1){
                    one++;
                }
                else{
                    zero++;
                }
            }
            if(zero>one){
                flipcol(i,grid);
            }
        }
        int ans=caluate(grid);
        return ans;
    }
};
