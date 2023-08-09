class Solution {
public:
    bool check(int mid,vector<int>&nums,int p){
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i=i+1){
            if(nums[i]-nums[i-1]<=mid){
                cnt++;
                i++;
            }
        }
        return cnt>=p;
    }
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.back();
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(check(mid,nums,p)){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
};
