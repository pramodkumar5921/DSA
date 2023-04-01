class Solution {
public:
    int solve1(vector<int>&nums){
        int l=0;
        int n=nums.size();
        int h=nums.size()-1;
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]>0){
                h=mid-1;
                ans=max(ans,n-mid);
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
    int solve(vector<int>&nums){
        int l=0;
        int h=nums.size()-1;
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]<0){
                l=mid+1;
                ans=max(ans,mid+1);
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
    int maximumCount(vector<int>& nums) {
        int neg=solve(nums);
        int pos=solve1(nums);
        return max(pos,neg);
    }
};
