class Solution {
public:
    int rob(vector<int>& nums) {
        int l=nums.size();
        if(l==0) return 0;
        if(l==1) return nums[0];
        if(l==2) return max(nums[0],nums[1]);
        // int dp[l+1];
        vector<int> dp(l);
        dp[0]=nums[0];
        dp[1]=max(nums[1],nums[0]);
        for(int i=2;i<l-1;i++){
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        int mx=dp[l-2];
        dp[1]=nums[1];dp[2]=max(nums[1],nums[2]);
        for(int i=3;i<l;i++){
            dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
        }
        return max(dp[l-1],mx);
    }
};
