class Solution {
public:
    int triangleNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       reverse(nums.begin(),nums.end());
       if(nums.size()<3){
           return 0;
       }
       int ans=0;int l=0;
       for(int i=0;i<nums.size()-2;i++){
           int j=i+1;
           int k=nums.size()-1;
           while(j<k){
               if(nums[j]+nums[k]>nums[i]){
                   ans+=k-j;
                   j++;
               }
               else{
                   k--;
               }
           }
       }
       return ans; 
    }
};
