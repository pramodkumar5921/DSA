class Solution {
// #define int long long
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long ans=-1;
        vector<long long>temp(nums.size(),0);
        temp[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            temp[i]=temp[i-1]+nums[i];
        }
        // int ans=-1;
        for(int i=2;i<nums.size();i++){
            if(temp[i-1]>nums[i]){
                ans=max(ans,temp[i]);
            }
        }
        return ans;
    }
};
