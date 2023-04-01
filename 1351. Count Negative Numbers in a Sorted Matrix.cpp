class Solution {
public:
    int solve(vector<int>&nums){
        reverse(nums.begin(),nums.end());
        int l=0;int h=nums.size()-1;
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]<0){
                ans=mid+1;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=solve(grid[i]);
        }
        return ans;
    }
};
