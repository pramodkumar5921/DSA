class Solution {
public:
    const int M=1e9+7;
    int dp[100001][2][3];
    int checkRecord(int n) {
       for(int i=0;i<=n;i++){
            for(int A=0;A<=1;A++){
                for(int L=0;L<=2;L++){
                    if(i==0){
                        dp[i][A][L]=1;
                    }
                    else{
                        int ans=0;
                        ans=ans%M+ (A+1<=1 ? dp[i-1][A+1][0]%M:0);
                        ans=ans%M+ (L+1<=2 ? dp[i-1][A][L+1]%M:0);
                        ans=ans%M+dp[i-1][A][0]%M;
                        dp[i][A][L]=ans%M;
                    }
                }
            }
         }
         return dp[n][0][0];
    }
};
