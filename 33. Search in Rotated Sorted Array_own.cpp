class Solution {
public:
    int solve1(vector<int>&nums,int left,int right,int target){
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return -1;
    }
    int solve(vector<int>&nums){
        int n=nums.size();
        int mini=*min_element(nums.begin(),nums.end());
        if(nums[0]==mini){
            return 0;
        }
        if(nums[n-1]==mini){
            return n-1;
        }
        int left=1;
        int right=n-2;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==mini){
                return mid;
            }
            else if(nums[mid]>nums[1]){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return 1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==1){
            if(nums[0]==target){
                return 0;
            }
            else{
                return -1;
            }
        }
        int p=solve(nums);
        // cout<<p<<endl;
        // return 0;
        int s1=solve1(nums,p,n-1,target);
        int s2=solve1(nums,0,p-1,target);
        if(s1!=-1){
            return s1;
        }
       if(s2!=-1){
           return s2;
       }
        return -1;
    }
};
