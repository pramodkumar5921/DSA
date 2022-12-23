class Solution {
public:
    int rob(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        int dp[n+1];
        dp[0]=0;
        dp[1]=0;
        dp[2]=min(nums[0],nums[1]);
        for(int i=3;i<=n;i++){
            dp[i]=min(dp[i-1]+nums[i-1],dp[i-2]+nums[i-2]);
        }
        return sum-dp[n];
    }
};
