class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int j=0;
        int bit=0;
        int ans=1;
        for(int i=0;i<nums.size();i++){
            while((bit & nums[i])!=0){
                bit=(bit^nums[j]);
                j++;
            }
            ans=max(ans,i-j+1);
            bit=bit|nums[i];
        }
        return ans;
    }
};
