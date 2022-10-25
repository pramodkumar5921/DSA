class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int temp=INT_MAX,ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            // int diff=v[i]-0;
            if(temp>=abs(nums[i])){
                temp=abs(nums[i]);
                    ans=nums[i];
            }
        }
        return ans;
    }
};
