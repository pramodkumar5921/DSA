class Solution {
public:
    int findMin(vector<int>& nums) {
       int l=0;
       int h=nums.size()-1;
       int mid;
       while(l<=h){
            mid=l+(h-l)/2;
           if(nums[mid]<nums[h]){
               h=mid;
           }
           else{
               l=mid+1;
           }
       } 
       
       return nums[mid];
    }
};
