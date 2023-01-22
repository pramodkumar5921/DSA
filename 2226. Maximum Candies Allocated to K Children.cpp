class Solution {
public:
    bool check(vector<int>nums,long long int mid,long long k){
        long long int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            cnt+=nums[i]/mid;
        }
      
        if(cnt>=k){
            return true;
        }
        return false;
    
    }
    
    int maximumCandies(vector<int>& nums, long long k) {
        long long int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum<k){
            return 0;
        }
        sort(nums.begin(),nums.end());
       long long  int s=1;
       long long  int e = nums[nums.size()-1];
        int ans=0;
        while(s<=e){
            long long int mid=s+(e-s)/2;
            if(check(nums,mid,k)){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
};
