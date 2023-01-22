class Solution {
public:
    bool check(vector<int>nums,int th,long long int mid){
        long long int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%mid==0){
                sum+=nums[i]/mid;
            }
            else{
                sum+=nums[i]/mid+1;
            }
        }
        if(sum<=th){
            return true;
        }
        return false;
    }
    int smallestDivisor(vector<int>& nums, int th) {
        int s=1;
        int ans=0;
        int e=*max_element(nums.begin(),nums.end());
        while(s<=e){
           long long  int mid=s+(e-s)/2;
            if(check(nums,th,mid)==true){
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
