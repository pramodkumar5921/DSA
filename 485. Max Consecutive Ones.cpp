class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,ans=0;
        nums.push_back(-1);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
            }
            else{
                ans=max(ans,cnt);
                cnt=0;
            }
        }
        return ans;
    }
};
