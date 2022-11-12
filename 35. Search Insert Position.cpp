class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int start=0;
       int last=nums.size()-1;
       int mid = start+(last-start)/2;
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
