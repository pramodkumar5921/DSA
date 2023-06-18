class Solution {
public:
    long long solve(vector<int>&cost,vector<int>&time,int wallremain,int idx,vector<vector<int>>&dp){
        // base case
        if(wallremain<=0){
            return 0;
        }
        if(idx>=cost.size()){
            return INT_MAX;
        }
        if(dp[wallremain][idx]!=-1){
            return dp[wallremain][idx];
        }
        long long include=cost[idx]+solve(cost,time,wallremain-time[idx]-1,idx+1,dp);
        long long exclude=solve(cost,time,wallremain,idx+1,dp);
        return dp[wallremain][idx]=min(include,exclude);
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
        vector<vector<int>>dp(501,vector<int>(501,-1));
        int n=time.size();
        return solve(cost,time,n,0,dp);
    }
};
