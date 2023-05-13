class Solution {
public:
    const int mod=1e9+7;
    int solve(int length,int low,int high,int zero,int one,vector<int>&dp){
        // base case
        if(length>high){
            return 0;
        }
        bool addone=false;
        if(length>=low and length<=high){
            addone=true;
        }
        if(dp[length]!=-1){
            return dp[length];
        }
        // recursive case
        int include1=solve(length+one,low,high,zero,one,dp);
        int include0=solve(length+zero,low,high,zero,one,dp);
        return dp[length]=(include1+include0+addone)%mod;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        int n=1e5+1;
        vector<int>dp(n,-1);
        int ans=solve(0,low,high,zero,one,dp);
        return ans;
    }
};
