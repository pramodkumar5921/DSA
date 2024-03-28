class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0,j=0;
        int n=nums.size();
        int ans=0;
        unordered_map<int,int>mp;
        while(i<n){
            mp[nums[i]]++;
            if(mp[nums[i]]<=k){
                ans=max(ans,i-j+1);
            }
            if(mp[nums[i]]>k){
                while(j<n and mp[nums[i]]>k){
                    mp[nums[j]]--;
                    if(mp[nums[j]]==0){
                        mp.erase(nums[j]);
                    }
                    j++;
                }
                ans=max(ans,i-j+1);
            }
            i++;
        }
        if(ans==0){
            return n;
        }
        return ans;
    }
};
