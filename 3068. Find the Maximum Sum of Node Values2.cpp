class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long remain=INT_MAX;
        long long cnt=0;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i]^k) > nums[i]){
                cnt++;
                ans=ans+(nums[i]^k);
                long long temp=(nums[i]^k);
                remain=min(remain,temp-nums[i]);
            }
            else{
                ans=ans+nums[i];
                long long temp=(nums[i]^k);
                remain=min(remain,nums[i]-temp);
            }
        }
        if(cnt%2==0){
            return ans;
        }
        return ans-remain;
    }
};
