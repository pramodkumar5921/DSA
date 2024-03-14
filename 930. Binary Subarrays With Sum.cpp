class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        vector<int>PreSum(n,0);
        PreSum[0]=nums[0];
        for(int i=1;i<n;i++){
            PreSum[i]=PreSum[i-1]+nums[i];
        }
         unordered_map<int,int>mp;
         mp[0]++;
         int ans=0;
         for(int i=0;i<n;i++){
            int remain=PreSum[i]-goal;
            if(mp.find(remain)!=mp.end()){
                ans+=mp[remain];
            }
            mp[PreSum[i]]++;
         }
         return ans;
    }
};
