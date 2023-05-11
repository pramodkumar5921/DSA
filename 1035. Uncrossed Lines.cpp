class Solution {
public:
    int m,n;
    int solve(int i,int j,vector<int>&nums1,vector<int>&nums2,vector<vector<int>>&dp){
        // base case
        if(i>=n || j>=m){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        // recursive case
        int cnt=0;
        if(nums1[i]==nums2[j]){
             cnt=1+solve(i+1,j+1,nums1,nums2,dp);
        }
        else{
            cnt=max({solve(i,j+1,nums1,nums2,dp),solve(i+1,j,nums1,nums2,dp)});
        }
        return dp[i][j]=cnt;
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        m=nums2.size();
        n=nums1.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int ans=solve(0,0,nums1,nums2,dp);
        return ans;
    }
};
