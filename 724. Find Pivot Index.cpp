class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int sum=0;
       for(int i=0;i<nums.size();i++){
           sum+=nums[i];
       }
       int right_sum=sum;
       int left_sum=0;
       for(int i=0;i<nums.size();i++){
           right_sum-=nums[i];
           if(left_sum==right_sum){
               return i;
           }
           left_sum+=nums[i];
       }
       return -1;
    }
};
