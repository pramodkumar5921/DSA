class Solution {
public:
    int dp[101];
    int solve(vector<int>&nums,int idx){
        int n=nums.size();
        // base case
        if(idx>=n){
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        // recursiv case
        int include = nums[idx]+solve(nums,idx+2);
        int exclude = 0        +solve(nums,idx+1);

        return dp[idx]=max(include,exclude);
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0);
    }
};
