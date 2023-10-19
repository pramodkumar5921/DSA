class Solution {
public:
    int dp[10004];
    bool solve(vector<int>&nums,int idx){
        int n=nums.size();
        if(idx>=n){
            return false;
        }
        if(idx==n-1){
            return true;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        bool ans=false;
        for(int i=1;i<=nums[idx];i++){
            ans = ans + solve(nums, idx+i);
            if(ans==true){
                return true;
            }
        }
        return dp[idx]=ans;
    }
    bool canJump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        bool res=solve(nums,0);
        return res;
    }
};
