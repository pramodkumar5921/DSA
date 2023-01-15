class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int ml=INT_MAX;
        int l=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                ml=min(ml,i-l+1);
                sum=sum-nums[l];
                l++;
            }
            

        }
        if(ml==INT_MAX){
            return 0;
        }
        return ml;
    }
};
