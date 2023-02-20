class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int last=nums.size()-1;
        while(start<=last){
            int mid=start+(last-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                last=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
};
/////////////////////////////////////// second approach /////////////////////////////////////
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // low1 = std::lower_bound(v.begin(), v.end(), 30);
        int ans=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        return ans;
    }
};
