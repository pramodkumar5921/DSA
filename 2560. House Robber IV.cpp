class Solution {
public:
    bool check(int guess,vector<int>&nums,int k,int ind=0){
        if(k==0){
            return true;
        }
        if(ind>=nums.size()){
            return false;
        }
       if(nums[ind]<=guess){
         return  check(guess,nums,k-1,ind+2);
      }
       else{
         return  check(guess,nums,k,ind+1);
      }
    }
    int minCapability(vector<int>& nums, int k) {
       int l=*min_element(nums.begin(),nums.end());
       int r=*max_element(nums.begin(),nums.end());
       int ans=0;
       while(l<=r){
           int guess=l+(r-l)/2;
           if(check(guess,nums,k)){
               ans=guess;
               r=guess-1;
           }
           else{
               l=guess+1;
           }
       }
       return ans;
    }
};
