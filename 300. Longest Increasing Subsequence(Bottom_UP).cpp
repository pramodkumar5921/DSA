class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,1);
        for(int i=1;i<n;i++){
            int maxi=1;
            bool flag=false;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    flag=true;
                    maxi=max(dp[j],maxi);
                }
            }
            dp[i]=maxi+flag;
        }
        int ans=*max_element(dp.begin(),dp.end());
        return ans;
    }
};
