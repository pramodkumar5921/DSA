class Solution {
public:
    int totalFruit(vector<int>& nums) {
        unordered_map<int,int>mp;
        int i=0;int j=0;
        int ans=0;
        while(i<nums.size()){
            mp[nums[i]]++;
            i++;
            if(mp.size()>2){
                mp[nums[j]]--;
                if(mp[nums[j]]==0){
                    mp.erase(nums[j]);
                }
                j++;
            }
            ans=max(ans,i-j);
        }
        return ans;
    }
};
