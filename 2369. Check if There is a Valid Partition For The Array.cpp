class Solution {
public:
    int n;
    // vector<int>dp(100001,-1);
    int dp[100001];
    bool solve(vector<int>&nums,int idx){
        if(idx<0){
            return true;
        }
        bool ans=false;
        if(dp[idx]!=-1){
            return dp[idx];
        }
        if(idx>0 and (nums[idx]==nums[idx-1])){
            ans+=(solve(nums,idx-2));
        }
        if(idx>1 and (nums[idx]==nums[idx-1]) and (nums[idx-1]==nums[idx-2])){
            ans+=(solve(nums,idx-3));
        }
        if(idx>1 and (nums[idx]==(nums[idx-1]+1)) and (nums[idx-1] == (nums[idx-2]+1))){
            ans+=(solve(nums,idx-3));
        }
        return dp[idx]=ans;
    }
    bool validPartition(vector<int>& nums) {
        n=nums.size();
        memset(dp,-1,sizeof(dp));
        return solve(nums,n-1);
    }
};
