class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,1);
        for(int i=1;i<n;i++){
            int temp=0;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    temp=max(temp,dp[j]);
                }
            }
            dp[i]=dp[i]+temp;
        }
        return *max_element(dp.begin(),dp.end());
    }
};
