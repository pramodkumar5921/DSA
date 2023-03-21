class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3){
            return 0;
        }
        int curr=0;
        int cnt=0;
        for(int i=1;i<nums.size()-1;i++){
           if(nums[i]*2==nums[i+1]+nums[i-1]){
               curr++;
               cnt=cnt+curr;
           }
           else{
               curr=0;
           }
        }
        return cnt;
    }
};
