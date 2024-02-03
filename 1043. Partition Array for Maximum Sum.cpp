class Solution {
public:
    int dp[501];
    int solve(vector<int>&arr,int k,int idx){
        if(idx>=arr.size()){
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        int curr=-1;
        int result=-1;
        for(int j=idx;j<arr.size() and j-idx+1<=k ;j++){
            curr=max(arr[j],curr);
            result=max(result,curr*(j-idx+1)+solve(arr,k,j+1));
        }
        return dp[idx]=result;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        memset(dp,-1,sizeof(dp));
      int ans=solve(arr,k,0);
      return ans;  
    }
};
