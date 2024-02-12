class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=1,ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(ans==nums[i]){
                cnt++;
            }
            else if(ans!=nums[i] and cnt>0){
                cnt--;
            }
            else if(ans!=nums[i] and cnt<=0){
                ans=nums[i];
                cnt++;
            }
        }
        return ans;
    }
};
