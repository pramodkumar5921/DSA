class Solution {
public:
    bool solve(int mid,vector<int>&nums){
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]/mid>=1){
                cnt++;
            }
        }
        return cnt>=mid;
    }
    int hIndex(vector<int>& nums) {
        int s=1;
        int e=nums.size();
        int ans=INT_MIN;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(solve(mid,nums)){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        if(ans==INT_MIN){
            return 0;
        }
        return ans;
    }
};
