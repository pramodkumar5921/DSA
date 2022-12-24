class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int mn=nums[0];
        int mx=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(mn,mx);
            }
            mn=min(nums[i],nums[i]*mn);
            mx=max(nums[i],nums[i]*mx);

            ans=max(ans,mx);
        }
        return ans;
    }
};
