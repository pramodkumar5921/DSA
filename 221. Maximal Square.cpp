class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int dp[m][n];
        int ans=0;
       memset(dp,0,sizeof(dp));
      
       for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
              if(i==0 or j==0){
                  if(matrix[i][j]=='1'){
                      dp[i][j]=1;
                      ans=max(ans,dp[i][j]);
                  }
              }
              else
              {
                 if(matrix[i][j]=='1'){
                     dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]))+1;
                     ans=max(ans,dp[i][j]);
                 }
              }
           }
       }
       return ans*ans;

    }
};
