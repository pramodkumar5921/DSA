class Solution {
public:
    int solve(vector<int>&nums,int target,int dp[1001]){
        // base case
        if(target==0){
            return 1;
        }
        if(target<0){
            return 0;
        }
        if(dp[target]!=-1){
            return dp[target];
        }
        int ans=0;
        // recursive case
        for(int i=0;i<nums.size();i++){
            ans+=solve(nums,target-nums[i],dp);
        }
        return dp[target]=ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        // vector<int>dp(/)
        int dp[1001];
        memset(dp,-1,sizeof(dp));
        int temp=solve(nums,target,dp);
        if(temp==-1){
            return 0;
        }
        return temp;
    }
};
