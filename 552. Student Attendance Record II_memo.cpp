class Solution {
public:
    const int M=1e9+7;
    int dp[100001][2][3];
    int solve(int n,int absence,int late){
        // base case
         if(absence>1 || late>2){
            return 0;
        }
        if(n==0){
            return 1;
        }
        if(dp[n][absence][late]!=-1){
            return dp[n][absence][late]%M;
        }
        // recursive case
        int A=solve(n-1,absence+1,0)%M;
        int L=solve(n-1,absence,late+1)%M;
        int P=solve(n-1,absence,0)%M;

        return dp[n][absence][late]=((A%M+L%M)%M+P%M)%M;
    }
    int checkRecord(int n) {
        memset(dp,-1,sizeof(dp));
        int ans=solve(n,0,0);
        return ans;
    }
};
