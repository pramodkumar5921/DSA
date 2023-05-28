class Solution {
public:
    long long solve(string &s,int curr,int idx,vector<vector<long long>>&dp){
        // base case
        int n=s.size();
        if(idx>=s.size()){
            return 0;
        }
        if(dp[idx][curr]!=-1){
            return dp[idx][curr];
        }
        long long a=0,b=0;
        if(curr!=s[idx]-'0'){
            a=a+((int)s.size()-idx)+solve(s,!curr,idx+1,dp);
            b=b+idx+solve(s,!curr,idx+1,dp);
            return dp[idx][curr]=min(a,b);
        }
         else 
         return dp[idx][curr]=solve(s,curr,idx+1,dp);
         
    }
    long long minimumCost(string s) {
        int n=s.size();
        vector<vector<long long>>dp(n+1,vector<long long>(2,-1));
        long long zero=solve(s,0,0,dp);
        long long one=solve(s,1,0,dp);
        return min(zero,one);
    }
};
