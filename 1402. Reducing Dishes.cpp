class Solution {
public:
    int solve(vector<int>&sat,int time,int idx,int dp[501][501]){
        int n=sat.size();
        // base case
        if(idx>=n){
            return 0;
        }
        if(dp[idx][time]!=-1){
            return dp[idx][time];
        }
        // recuesive case
        int include=sat[idx]*(time)+solve(sat,time+1,idx+1,dp);
        int exclude=0+solve(sat,time,idx+1,dp);
        int ans= max(include,exclude);
        return dp[idx][time]=ans;
    }
    int maxSatisfaction(vector<int>& sat) {
        int dp[501][501];
        memset(dp,-1,sizeof(dp));
        sort(sat.begin(),sat.end());
        int temp=solve(sat,1,0,dp);
        return temp;
    }
};
