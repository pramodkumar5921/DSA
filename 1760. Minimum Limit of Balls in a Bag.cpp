class Solution {
public:
    bool check(vector<int>&nums,long long int mid,int o){
        int cnt=0;
        for(long long int i=0;i<nums.size();i++){
            cnt+=(nums[i]-1)/mid;
            if(cnt>o){
                return 0;
            }
            // return 1;
        }
        return 1;
    }
    int minimumSize(vector<int>& nums, int o) {
        long long int l=1;
        long long int h=*max_element(nums.begin(),nums.end());
        // long long int mid=l+(h-l)/2;
        long long int ans=0;
        while(l<=h){
             long long int mid=l+(h-l)/2;
            if(check(nums,mid,o)){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};
