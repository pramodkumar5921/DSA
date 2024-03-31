class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int minkidx=-1;
        int maxkidx=-1;
        int culidx=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==minK){
                minkidx=i;
            }
            if(nums[i]==maxK){
                maxkidx=i;
            }
            if(nums[i]<minK || nums[i]>maxK){
                culidx=i;
            }
            int smaller=min(minkidx,maxkidx);
            int temp=smaller-culidx;
            if( temp > 0){
                ans=ans+smaller-culidx;
            }
        }
        return ans;
    }
};
