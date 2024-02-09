class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>dp(n,1);
        vector<int>prev(n,-1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0){
                  if(dp[j]+1>dp[i]){
                      dp[i]=dp[j]+1;
                      prev[i]=j;
                  }
                }
            }
        }
        vector<int>ans;
        int idx=-1,maxi=-1;
        for(int i=0;i<dp.size();i++){
            if(dp[i]>maxi){
                idx=i;
                maxi=dp[i];
            }
        }
        while(idx!=-1){
            ans.push_back(nums[idx]);
            idx=prev[idx];
        }
        return ans;
    }
};
