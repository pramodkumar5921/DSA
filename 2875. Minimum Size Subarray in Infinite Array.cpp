class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) {
        vector<int>arr;
        int n=0;
        while(n<1e5+1){
            int m=nums.size();
            for(int i=0;i<m;i++){
                arr.push_back(nums[i]);
                    n++;
            }  
        }
        int m=arr.size();
        int i=0,j=0;
        long long sum=0;
        int ans=INT_MAX;
        while(i<m and j<m){
            sum+=arr[i];
            while(sum>target){
               sum-=arr[j]; 
                j++;
            }
            if(sum==target){
               int cnt=i-j+1;
                ans=min(ans,cnt);
            }
            i++;
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};
