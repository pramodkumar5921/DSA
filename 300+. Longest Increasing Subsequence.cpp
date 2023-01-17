class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int dp[n+1];
        for(int i=0;i<=n;i++){
            dp[i]=1;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j] and  dp[i]< dp[j]+1){
                    dp[i]=dp[j]+1;
                }
            }
        }
        int res=INT_MIN;
        for(int i=0;i<n;i++){
            if(dp[i]>res){
                res=dp[i];
            }
        }
        for(int i=0;i<n;i++){
            cout<<dp[i]<<" ";
        }
        return res;
    }
};
