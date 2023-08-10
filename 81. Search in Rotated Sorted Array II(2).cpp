class Solution {
public:
    bool solve(vector<int>&nums,int left,int right,int target){
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return false;
    }
    int pivot(vector<int>&nums,int target){
        int n=nums.size();
        int left=0;
        int right=n-1;
        while(left<right){
            while(left<right and nums[left]==nums[right]){
                left++;
            }
            while(right>left and nums[right]==nums[right-1]){
                right--;
            }
            int mid=left+(right-left)/2;
            if(nums[mid]>nums[right]){
                left=mid+1;
            }
            else{
                right=mid;
            }
        }
        return right;
    }
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        if(nums.size()==1 and nums[0]==target){
            return true;
        }
        if(n==1){
            return false;
        }
        int p=pivot(nums,target);
        bool s1=solve(nums,0,p-1,target);
        bool s2=solve(nums,p,n-1,target);
        if(s1==true or s2==true){
            return true;
        }
        return false;
    }
};
