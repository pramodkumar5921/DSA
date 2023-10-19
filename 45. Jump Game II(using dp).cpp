class Solution {
public:
    int dp[10004];
    int solve(vector<int>&nums,int idx){
        // base case
        int n=nums.size();
        if(idx>=n){
            return 1000000;
        }
        if(idx==n-1){
            return 0; 
        }
        if(nums[idx]==0){
            return 1000000;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        // recursive case
        int ans=INT_MAX;
        for(int i=1;i<=nums[idx];i++){
            int res = 1 + solve(nums,idx+i);
            ans = min(ans,res);
        }
        return dp[idx]=ans;
    }
    int jump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int ans = solve(nums,0);
        return ans;
    }
};
