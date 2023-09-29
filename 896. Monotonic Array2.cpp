class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        // int first=nums[0];
        int increase=1,decrease=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>=nums[i-1]){
                increase++;
            }
            if(nums[i]<=nums[i-1]){
                decrease++;
            }
        }
        if(increase==nums.size() or decrease==nums.size()){
            return true;
        }
        return false;
    }

};
