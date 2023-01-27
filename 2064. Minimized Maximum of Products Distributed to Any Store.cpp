class Solution {
public:
    bool check(int mid,vector<int>nums,int k){
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            
                cnt+=ceil((double)nums[i]/mid);
            
        }
        if(cnt>k){
            return false;
        }
        return true;
    }
    int minimizedMaximum(int n, vector<int>& nums) {
        int s=1;
        int e=*max_element(nums.begin(),nums.end());
        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(check(mid,nums,n)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};
