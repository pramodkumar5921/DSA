class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;
        int sum=0;
        // int n;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            //  n+=sum;
          
             ans=max(ans,sum);
             if(sum<0){
                sum=0;
                // ans=0;
            }

        }
      
        return ans;
    }
};
