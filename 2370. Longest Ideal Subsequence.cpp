class Solution {
public:
//    int dp[1e5+1][27];
    int solve(string &s,int k,int prev,int curr,vector<vector<int>>&dp){
        // base case
        if(curr>=s.size()){
            return 0;
        }
        if(dp[curr+1][prev+1]!=-1){
            return dp[curr+1][prev+1];
        }
        // recursive case
        int include=0,exclude=0;
        if(prev==-1 || abs((s[curr]-'a')-prev)<=k){
            include=1+solve(s,k,s[curr]-'a',curr+1,dp);
        }
        exclude=0+solve(s,k,prev,curr+1,dp);
        return dp[curr+1][prev+1]=max(include,exclude);
    }
    int longestIdealString(string s, int k) {
        int n=s.size();
        vector<vector<int>>dp(n+10,vector<int>(27,-1));
        // memset(dp,-1,sizeof(dp));
        int ans=solve(s,k,-1,0,dp);
        return ans;
    }
};
