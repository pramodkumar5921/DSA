class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long ans=0;
        long long remain=INT_MAX;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i]^k)>nums[i]){
                ans+=(nums[i]^k);
                long long ele=nums[i]^k;
                remain=min(ele-nums[i],remain);
                cnt++;
            }
            else{
                ans+=(nums[i]);
                long long ele=nums[i]^k;
                remain=min(nums[i]-ele,remain);
            }
        }
        if(cnt%2==0){
            return ans;
        }
        return ans-remain;
    }
};
