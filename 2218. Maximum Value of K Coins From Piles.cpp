class Solution {
public:
    int solve(vector<vector<int>>&piles,int k,int idx,vector<vector<int>>&dp){
        // base case
        if(idx>=piles.size()){
            return 0;
        }
        if(dp[idx][k]!=-1){
            return dp[idx][k];
        }
        // recursive case
        // Not include the first vector
        int maxi=0,sum=0;
        maxi=max(maxi,solve(piles,k,idx+1,dp));
        for(int i=0;i<piles[idx].size();i++){
            sum+=piles[idx][i];
            if(k-(i+1)>=0){
                maxi=max(maxi,sum+solve(piles,k-(i+1),idx+1,dp));
            }
        }
        return dp[idx][k]=maxi;
    }
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n=piles.size();
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        int ans=solve(piles,k,0,dp);
        return ans;
    }
};
