class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int i=0,j=1;
        int n=nums.size();
        int cnt=1,mx=0;
        if(n==1){
            return 1;
        }
        while(j<n){
            if(nums[i]<nums[j]){
                cnt++;
                i++;j++;
                mx=max(mx,cnt);
            }
            else{
                mx=max(mx,cnt);
                cnt=1;
                i++;j++;
            }
        }
        return mx;
    }
};
