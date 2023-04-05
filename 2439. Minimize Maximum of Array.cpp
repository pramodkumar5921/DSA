class Solution {
public:
    bool check(int mid,vector<int>&nums){
         long long  sum=0;
         for(int i=0;i<nums.size();i++){
             sum=sum+nums[i];
             if(sum>(long long )mid*(i+1)){
                 return false;
             }
         }
         return true;
    }
    int minimizeArrayValue(vector<int>& nums) {
        int left=0;
        int right=*max_element(nums.begin(),nums.end());
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(check(mid,nums)){
                ans=mid;
                right=mid-1;
            }
            else{
                
                left=mid+1;
            }
        }
        return ans;
    }
};
