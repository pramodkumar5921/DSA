class Solution {
public:
    int search(vector<int>& nums, int key) {
        if(nums.size()==1){
            if(nums[0]==key){
                return 0;
            }
        }
        int s=0;int e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(key==nums[mid]){
                return mid;
            }
            if(nums[s]<=nums[mid]){
                if(key>=nums[s] and key<nums[mid]){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if(key>nums[mid] and nums[e]>=key){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return -1;
    }
};
