class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0,maxreach=0;
        while(i<nums.size() and i<=maxreach){
             maxreach=max(i+nums[i],maxreach);
            i++;
        }
        if(i==nums.size()){
            return true;
        }
        
        return false;
    }
};
