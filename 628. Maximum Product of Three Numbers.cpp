class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans;
        for(int i=0;i<nums.size();i++){
            int a=nums[0]*nums[1]*nums[2];
            int b=nums[n-1]*nums[n-2]*nums[n-3];
            int c=nums[0]*nums[1]*nums[n-1];
             ans=max({a,b,c});
        }
        // int ans=max({a,b,c});
        return ans;
    }
};
