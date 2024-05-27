class Solution {
public:
    int maxScore(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>temp(n,vector<int>(m,0));
        temp[n-1][m-1]=grid[n-1][m-1];
        int maxans=INT_MIN;
        for(int j=m-2;j>=0;j--){
            temp[n-1][j]=max(grid[n-1][j],temp[n-1][j+1]);
            int ans=temp[n-1][j+1]-grid[n-1][j];
            maxans=max(ans,maxans);
        }
        for(int i=n-2;i>=0;i--){
            temp[i][m-1]=max(grid[i][m-1],temp[i+1][m-1]);
            int ans=temp[i+1][m-1]-grid[i][m-1];
            maxans=max(ans,maxans);
        }
        for(int i=n-2;i>=0;i--){
            for(int j=m-2;j>=0;j--){
                temp[i][j]=max({grid[i][j],temp[i+1][j],temp[i][j+1]});
                int ans=max(temp[i+1][j],temp[i][j+1])-grid[i][j];
                maxans=max(ans,maxans);
            }
        }
       return maxans;
    }
};
