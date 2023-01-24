class Solution {
public:
    bool check(vector<int>&nums,int k,int mid){
        int i=0,j=0;int sum=0;int cnt=0;
        int key=nums[mid-1];
        while(j<mid){
            if(j-i+1<mid){
                // int key=nums[mid-1];
                sum+=nums[j];
                j++;
            }
            if(j-i+1==mid){
               cnt=key*(mid-1)-sum;
               if(cnt<=k){
               return 1;
               }
               i++;
               j++;
            }
        }
        return 0;
    }
    int maxFrequency(vector<int>& nums, int k) {
        int s=1;
        int e=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        while(s<=e){
            int mid=s+(e-s)/2;
            if(check(nums,k,mid)){
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
