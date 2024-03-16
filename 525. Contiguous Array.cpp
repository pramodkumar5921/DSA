class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
        unordered_map<int,int>mp;
        mp[0]=-1;
        int Sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            Sum+=nums[i];
            if(mp.find(Sum)!=mp.end()){
                ans=max(ans,i-mp[Sum]);
            }
            else{
                mp[Sum]=i;
            }
        }
        return ans;
    }
};
