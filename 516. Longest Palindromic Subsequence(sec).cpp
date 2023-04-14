class Solution {
public:
    int solve(string &s,string &t,int n,int m,vector<vector<int>>&dp){
        if(m==0){
            return 0;
        }
        if(n==0){
            return 0;
        }
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        int ans=0;
        if(s[m-1]==t[n-1]){
            ans=1+solve(s,t,n-1,m-1,dp);
        }
        else{
        ans=max(solve(s,t,n-1,m,dp),solve(s,t,n,m-1,dp));
        }
        return dp[n][m]=ans;
    }
    int longestPalindromeSubseq(string s) {
        string t;
        t=s;
        int n=t.size();
        reverse(t.begin(),t.end());
        int m=s.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int ans=solve(s,t,n,m,dp);
        return ans;
    }
};
