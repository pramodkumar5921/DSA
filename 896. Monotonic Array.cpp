class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int des=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>=nums[i]){
                des++;
            }
        }
        int inc=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<=nums[i]){
                inc++;
            }
        }
        if(des==nums.size()-1){
            return true;
        }
        if(inc==nums.size()-1){
            return true;
        }
        return false;
    }
};
