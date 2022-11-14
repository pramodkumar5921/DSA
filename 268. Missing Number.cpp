class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1=0;
     for(int i=1;i<=nums.size();i++){
         sum1+=i;
     }
     int sum2=0;
     for(int i=0;i<nums.size();i++){
         sum2+=nums[i];
     }
     return sum1-sum2;   
    }
};
