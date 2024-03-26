class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<=0){
                nums[i]=n+1;
            }
            if(nums[i]>n){
                nums[i]=n+1;
            }
        }
        for(int i=0;i<n;i++){
            int num=nums[i];
            int idx=abs(num)-1;
            if(idx>=n){
                continue;
            }
            else{
                if(nums[idx]>0){
                nums[idx]=nums[idx]*-1;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        return n+1;
    }
};
