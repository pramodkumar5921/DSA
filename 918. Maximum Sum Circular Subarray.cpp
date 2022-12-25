class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
          int sum=0;
          for(int i=0;i<nums.size();i++){
              sum+=nums[i];
          }
          int ans=INT_MIN;
          int temp=0;
          for(int i=0;i<nums.size();i++){
              int key=-nums[i];
              temp+=key;
              ans=max(ans,temp);
              if(temp<0){
                  temp=0;
              }
          }
          ans=-ans;
          int res=sum-ans;
         int val=INT_MIN;
         int sum2=0;
         for(int i=0;i<nums.size();i++){
             sum2+=nums[i];
             val=max(val,sum2);
             if(sum2<0){
                 sum2=0;
             }
         }
         if(res>val and res!=0){
             return res;
         } 
         return val;
          
    }
};
