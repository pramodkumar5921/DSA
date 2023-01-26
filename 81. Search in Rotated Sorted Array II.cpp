class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int mid;
        while(l<=h){
            mid=l+(h-l)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[l]==nums[h] and nums[l]==nums[mid]){
                l++;
                h--;
            }
            else if(nums[l]<=nums[mid]){
                if(nums[l]<=target and nums[mid]>target){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(nums[mid]<target and nums[h]>=target){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return false;
    }
};
