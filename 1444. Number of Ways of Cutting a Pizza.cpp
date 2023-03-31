class Solution {
public:
    long long mod=1e9+7;
    int dp[55][55][55];
   
    int dfs(int m,int n,int k,int i,int j,vector<vector<int>>&presum){
        // base case
        if(presum[i][j]<k) return 0;
        if(k==1) {
            if(presum[i][j]>=1){
                return true;
            }
            else{
                return false;
            }
        }
        if(dp[k][i][j]!=-1){
            return dp[k][i][j];
        }
        // recursive case
        int ans=0;
        for(int h=i+1;h<m;h++){
            int r_n=presum[h][j];
            int r_u=presum[i][j]-presum[h][j];
            if(r_n>=k-1 and r_u>=1){
                ans=(ans%mod+dfs(m,n,k-1,h,j,presum)%mod)%mod;
            }
        }
        for(int v=j+1;v<n;v++){
            int v_r=presum[i][v];
            int v_l=presum[i][j]-v_r;
            if(v_r>=k-1 and v_l>=1){
                ans=(ans%mod+dfs(m,n,k-1,i,v,presum)%mod)%mod;
            }
        }
        return dp[k][i][j]=ans;
    }
    int ways(vector<string>& pizza, int k) {
        int m=pizza.size();
        int n=pizza[0].size();
         memset(dp,-1,sizeof(dp));
        vector<vector<int>>presum(m+1,vector<int>(n+1,0));
        for(int r=m-1;r>=0;r--){
            for(int c=n-1;c>=0;c--){
                presum[r][c]=(pizza[r][c]=='A')+presum[r+1][c]+presum[r][c+1]-presum[r+1][c+1];
            }
        }
        return dfs(m,n,k,0,0,presum);
    }
};
