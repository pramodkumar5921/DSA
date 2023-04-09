class Solution {
public:
    bool check(int mid,int p,vector<int>&nums){
        int cnt=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]<=mid){
                cnt++;
                i++;
            }
        }
        return cnt>=p;
    }
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.back();
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(check(mid,p,nums)){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};
